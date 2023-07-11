#include "main.h"

/**
 * create_array - function that creates array
 * @size: the size of th array
 * @c: the caracter to be printed
 * Return: something
*/

char *create_array(unsigned int size, char c)
{
	char *a = malloc(size);

	if (size == 0 || a == 0)
		return (0);

	while (size--)
		a[size] = c;
	return (a);
}
