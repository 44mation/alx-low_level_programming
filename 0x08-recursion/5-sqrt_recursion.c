#include "main.h"

/**
 * _sqrt_recursion - calcul the root square
 * @n: the input 1
 * @x: the input 2
 * Return: the answer
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
 * Return: the answer
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
