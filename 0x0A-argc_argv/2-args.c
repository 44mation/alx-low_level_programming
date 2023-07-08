#include <stdio.h>

/**
 * s_args - fct prints
 * @argc: input 1
 * @argv: input 2
 * Return: always 0
*/

int s_args(int argc, char **argv)
{
	int i = 0;

	while (argc--)
	{
		prints("%s\n", argv[i]);
		i++;
	}
	return (0);
}	
