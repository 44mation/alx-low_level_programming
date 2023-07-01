#include "main.h"

/**
 * _strcat - fnction that concatenate 2 strings
 * @dest: first input
 * @src: second input
 * Return : return a pointer
*/

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a])
		a++;

	for (b = 0; src[b]; b++)
		dest[a++] = src[b];

	return (dest);
}
