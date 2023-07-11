#include "main.h"

/**
 * _strdup - main function
 * @str: pointer input
 * Return: somthing
*/

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *a;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;
		a = malloc(size * sizeof(*str) + 1);

	if (a == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
			a[i] = str[i];
	}
	return (a);
}
