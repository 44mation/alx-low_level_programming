#include "variadic_functions.h"

/**
 * sum_them_all - function for add
 * @n: the number of arguments
 * @...: the arguments
 * Return: the result
*/

int sum_them_all(const unsigned int n, ...)
{
	int i = n, sum = 0;
	va_list ptr;

	if (!n)
		return (0);

	va_start(ptr, n);

	while (i--)
		sum += va_arg(ptr, int);

	va_end(ptr);
	return (sum);
}
