#include "main.h"

/**
 * get_bit - get the bit at index
 * @n: the number
 * @index: the bit
 * Return: the bit status
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
