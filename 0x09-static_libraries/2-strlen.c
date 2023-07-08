#include "main.h"

/**
 * _strlen - calculate the lenght of a string
 * @s: the input string
 *
 * Return: the lenght
*/

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
		len++;

	return (len);
}
