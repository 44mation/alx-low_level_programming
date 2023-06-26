#include "main.h"
/**
 * _puts - fct prints a sting
 * @str: the string
*/

void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);

	_putchar('\n');
}

