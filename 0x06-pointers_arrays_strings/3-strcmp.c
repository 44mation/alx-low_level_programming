#include "main.h"

/**
 * _strcmp - main function
 * @s1: frst input
 * @s2: second input
 *
 * Return: return an integer
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			i = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (i);
}
