#include "main.h"

/**
 * factorial - calculate factorial
 * @n: the input
 * Return: the answer
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		n *= factorial(n + 1);
	return (n);
}
