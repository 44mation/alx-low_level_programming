#include "main.h"

/**
 * print_array - fct prints somthing
 * @a: pointer of array
 * @n: number inputed
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n-1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
