#include "main.h"

/**
 * _pow_recursion - calculate the powwer of a number
 * @x: the first input
 * @y: the seconde input
 * Return: the result of a power*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
