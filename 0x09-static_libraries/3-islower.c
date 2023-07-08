#include "main.h"

/**
 * _islower - main code
 *
 * @c: the input
 * Description: verify a character if lower case or not
 *
 * Return: return 1 it it is or 0 if not
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
