#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry
 *
 * Description: coding using
 *
 * Return: 0 is success
*/

int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;
	if (lastd > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, lastd);
	else if (lastd == 0)
		printf("Last digit of %i is %i and is 0\n", n, lastd);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lastd);
	return (0);
}
