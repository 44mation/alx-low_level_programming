#include <stdio.h>

/**
 * main - fct prints
 * @argc: input 1
 * @argv: input 2
 * Return: always 0
*/

int main(int argc, char const **argv)
{
	int i = 0;

	while (argc--)
	{
		prints("%s\n", argv[i]);
		i++;
	}
	return (0);
}	
