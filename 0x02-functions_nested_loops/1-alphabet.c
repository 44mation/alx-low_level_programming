#include "main.h"

/**
 * print_alphabet - entry
 *
 * Description: code that prints
 *
 * Return: a 0 if success
*/

void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');

	return (0);
}
