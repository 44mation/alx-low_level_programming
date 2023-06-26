#include "main.h"

/**
 * reset_to_98 - function to replace a number with 98
 * @*n: the input
*/

void reset_to_98(int *n)
{

	int *p = &n;

	printf("n=%d\n", *n);

	*p = 98;

	printf("n=%d\n", *p);
}
