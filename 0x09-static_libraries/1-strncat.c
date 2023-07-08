#include "main.h"

/**
 * _strncat - main function
 * @dest: first input
 * @src: second input
 * @n: third input
 *
 * Return: return a pointer
*/

char *_strncat(char *dest, char *src, int n)
{
	int a, i;

	a = 0;
	while (dest[a])
		a++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[a + i] = src[i];
	dest[a + i] = '\0';

	return (dest);
}
