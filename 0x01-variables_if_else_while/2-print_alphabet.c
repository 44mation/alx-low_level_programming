#include <stdio.h>

/**
 * main - start of the code
 *
 * Description: code to print alphabet in lowercase
 *
 * Return: a success
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
