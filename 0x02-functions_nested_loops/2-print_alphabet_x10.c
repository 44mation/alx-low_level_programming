#include "main.h"

/**
 * print_alphabet_x10 - entry
 *
 * Description: code that prints alphabets 10 times
 *
*/

void print_alphabet_x10(void)
{
	int nb, a;

	for (nb = 1; nb <= 10; nb++)
	{
	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
	}
}
