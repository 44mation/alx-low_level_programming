#include "main.h"
#include <string.h>

/**
 * puts_half - fct prints half of a sting
 * @str: the string
*/

void puts_half(char *str)
{
	int i;

	i = strlen(str) / 2;
	if (i % 2 == 0)
	{
		_putchar(str[i]);
		i++;
	}
	else
	{
		i = (strlen(str) - 1) / 2;
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
