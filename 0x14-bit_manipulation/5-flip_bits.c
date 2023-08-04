#include "main.h"

/**
 * flip_bits - returns the number of bits to flip from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int val = n ^ m;
	unsigned int i = 0;

	while (val)
	{
		if (val & 1ul)
			i++;
		val = val >> 1;
	}
	return (i);
}
