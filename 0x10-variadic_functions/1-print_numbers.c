#include "variadic_functions.h"

/**
 * print_numbers - function prints all numbers
 * @separator: the separator
 * @n: number of arguments
 * @...: the arguments
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ptr;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ptr, n);
	while (i--)
		printf("%d%s", va_arg(ptr, int), i ? (separator ? separator : "") : "\n");
	va_end(ptr);
}
