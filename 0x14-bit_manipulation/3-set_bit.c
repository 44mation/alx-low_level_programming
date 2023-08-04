#include "main.h"

/**
 * set_bit - sets the value of abit
 * @n: the number
 * @index: the index of number
 * Return: false or true (1 or -1)
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
