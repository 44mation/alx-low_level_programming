#include "variadic_functions.h"

/**
 * print_strings - function prints strings
 * @separator: the separator
 * @n: number of arguments
 * @...: the arguments
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list ptr;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ptr, n);
	while (i--)
		printf("%s%s", (str = va_arg(ptr, char *)) ? str : "(nil)",
			i ? (separator ? separator : "") : "\n");
	va_end(ptr);
}
