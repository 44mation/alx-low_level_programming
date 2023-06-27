#include "main.h"

/**
 * _strcpy - fct that copies the input
 * @dest: the copied input
 * @src: the input
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
       return (dest);	
}
