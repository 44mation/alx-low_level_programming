#include "main.h"

/**
 * myname - function that returns name of file
 * @argc: first input
 * @argv: second input
 * Return: always 0
*/

int myname(int argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
