#include "variadic_functions.h"

/**
 * sum_them_all - function for add
 * @n: the number of arguments
 * @...: the arguments
 * Return: the result
*/

int sum_them_all(const unsigned int n, ...)
{
	int i, sum;

	if (n != 0)
	{
	va_list ptr;
	va_start(ptr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);
	
	va_end(ptr);
	return (sum);
	}
	else
		return (0);
}
