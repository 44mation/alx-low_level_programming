#include "main.h"

/**
 * _isalpha - main code
 *
 * @c: the input
 * Description: verify a character if alphabet or not
 *
 * Return: return 1 it it is or 0 if not
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
		return (1);
	return (0);
}
