#include "main.h"

/**
 * rev_string - reverse a strnig
 * @s: the input string
*/

void rev_string(char *s)
{
	int i = 0, j = 0;
	char temp;

	j = strlen(s) - 1;
	while (i < j)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		i++;
		j--;
	}
}
