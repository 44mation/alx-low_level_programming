#include <stdio.h>

/**
 * main - function that returns name of file
 * @argc: first input
 * @argv: second input
 * Return: always 0
*/

int main(int argc, char const **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
