#include "main.h"

/**
 * print_rev - print phrase in reverse
 * @s: the string unputed
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
