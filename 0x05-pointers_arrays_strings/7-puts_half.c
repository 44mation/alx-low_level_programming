#include "main.h"
#include <string.h>

/**
 * puts_half - fct prints half of a sting
 * @str: the string
*/

void puts_half(char *str)
{
	int i;

	i = (strlen(str) / 2) + 1;
	for (i /= 2; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
