#include "main.h"

/**
 * _isdigit - check if it's a number
 * @c: the input
 *
 * Return: 1 if it's true and 0 if itsn't 
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
