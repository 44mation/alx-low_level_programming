#include "main.h"

/**
 * print_binary - print a binary
 * @n: the number
*/

void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8;
	int print = 0;

	while (bit)
	{
		if (n & 1L << (bit - 1))
		{
			_putchar ('1');
			print++;
		}
		else if (print)
			_putchar('0');
	}
	if (!print)
		_putchar('0');
}
