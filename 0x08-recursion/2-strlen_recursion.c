#include "main.h"

/**
 * _strlen_recursion - fct calculate the lenght of string
 * @s: the input
 * Return: the lenght of the string
*/

int _strlen_recursion(char *s)
{
	int n = 1;

	if (*s != '\0')
		n += _strlen_recursion(s + 1);

	return (n);
}
