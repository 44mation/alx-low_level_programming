#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: the name to print
 * @f: the funxction that prints
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
