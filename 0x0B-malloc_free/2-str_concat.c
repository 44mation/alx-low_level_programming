#include "main.h"
#include <string.h>

/**
 * str_concat - main function
 * @s1: first input
 * @s2: second input
 * Return: somthing
*/

char *str_concat(char *s1, char *s2)
{
	int i, size1, size2;
	char *a;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = strlen(s1);
	size2 = strlen(s2);
	a = malloc((size1 + size2) * sizeof(char) + 1);
	if (a == 0)
		return (0);

	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			a[i] = s1[i];
		else
			a[i] = s2[i - size1];
	}
	a[i] = '\0';
	return (a);
}
