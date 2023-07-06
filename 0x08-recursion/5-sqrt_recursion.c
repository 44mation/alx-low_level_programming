#include "main.h"

/**
 * _sqrt_recursion - calcul the root square
 * @n: the input
 * return: the answer
*/

int square(int n, int x);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - calcul the square
 * @n: first input
 * @x: seconde input
 * return: the answer
*/

int square(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
	{
		return (square(n, x + 1));
	}
	else
		return (-1);
		
}
