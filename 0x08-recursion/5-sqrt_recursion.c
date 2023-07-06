#include "main.h"

/***/

int _sqrt_recursion(int n)
{
	int x;

	if (x * x == n)
		return (x);
	else if (x * x < n)
	{
		x++;
	}
	else
		return (-1);
		
}
