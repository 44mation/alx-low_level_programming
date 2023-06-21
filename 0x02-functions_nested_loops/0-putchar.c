#include "main.h"

/**
 * main - entry
 *
 * Description: code that prints
 *
 * Return: a 0 if success
*/

int main(void)
{
	char str[] = "_putchar";
	int a;

	for (a = 0; a < 8; a++)
		_putchar(str[a]);
	_putchar('\n');

	return (0);
}
