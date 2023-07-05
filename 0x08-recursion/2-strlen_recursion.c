#include "main.h"

/**
 * _strlen_recursion - fct calculate the lenght of string
 * @s: the input
 * Return: the lenght of the string
*/

int _strlen_recursion(char *s)
{
	int n = 0;

	if (s != '\0')
		n += _strlen_recursion(n + 1) + 1;

	return (n);
}
