#include <stdio.h>

/**
 * main - print number
 * @argc: first input
 * @argv: second input
 * Return: always 0
*/

int main(int argc, char const **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
