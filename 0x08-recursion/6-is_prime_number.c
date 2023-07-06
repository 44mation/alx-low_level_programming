#include "main.h"

/**
 * is_prime_number - checks a number if prime or not
 * @n: input 1
 * @x: input 2
 * Return: true 1 or false 0
*/

int prime(int n, int x);
int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
 * prime - the function that checks
 * @n: first input
 * @x: seconde input
 * Return: the number check
*/

int prime(int n, int x)
{
	if (x >= n && n > 1)
		return (1);
	else if (n % x == 0 || n <= 1)
		return (0);
	else
		return (prime(n, x + 1));
}
