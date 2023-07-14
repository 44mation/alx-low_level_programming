#include "main.h"

/**
 * malloc_checked - fct that allocates memory
 * @b: the input
 * Return: returns something
*/

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
