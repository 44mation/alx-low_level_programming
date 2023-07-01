#include "main.h"

/**
 * _strncpy - main function
 * @dest: first input
 * @src: second input
 * @n: third input
 *
 * Return: return a pointer
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
