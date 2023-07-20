#include "variadic_functions.h"

/**
 * f_char - for character
 * @separator: the separator
 * @ptr: arg pointer
*/

void f_char(char *separator, va_list ptr)
{
	printf("%s%c", separator, va_arg(ptr, int));
}

/**
 * f_int - for integer
 * @separator: the separator
 * @ptr: arg pointer
*/

void f_int(char *separator, va_list ptr)
{
	printf("%s%d", separator, va_arg(ptr, int));
}

/**
 * f_float - for float
 * @separator: the separator
 * @ptr: arg pointer
*/

void f_float(char *separator, va_list ptr)
{
	printf("%s%f", separator, va_arg(ptr, double));
}

/**
 * f_string - for strings
 * @separator: the separator
 * @ptr: arg pointer
*/

void f_string(char *separator, va_list ptr)
{
	char *st = va_arg(ptr, char *);

	switch ((int)(!st))
	case 1:
		st = "(nil)";

	printf("%s%s", separator, st);
}


/**
 * print_all - function prints all arguments
 * @format: the format of arguments
 * @...: the arguments
*/

void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *separator = "";
	va_list ptr;
	token_t tokens[] = {
		{"c", f_char},
		{"i", f_int},
		{"f", f_float},
		{"s", f_string},
		{NULL, NULL}
	};

	va_start(ptr, format);
	while (format && format[i])
	{
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, ptr);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ptr);
}
