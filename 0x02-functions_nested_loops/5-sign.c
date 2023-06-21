#include "main.h"

/**
 * print_sign - main code
 *
 * @n: the input
 * Description: verify if number greater than 0 or not
 *
 * Return: return 1 if it is or 0 if it's 0 or -1 if it isnt
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
