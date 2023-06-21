#include "main.h"

/**
 * print_last_digit - main code
 *
 * @n: the input
 *
 * Return: lastdigit
*/

int print_last_digit(int n)
{
	int lastd;

	if (n < 0)
		lastd = -1 * (n % 10);
	else
		lastd = n % 10;

	_putchar(lastd + 48)
	return (lastd);
}
