#include "main.h"
#include <string.h>

/**
 * string_nconcat - function that
 * @s1: first input
 * @s2: second input
 * @n: third input
 * Return: the string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j;

	str = malloc(strlen(s1) + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
