#include "main.h"

/**
 * swap_int - fct swaps numbers
 * @a: first input
 * @b: second input
*/

void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
