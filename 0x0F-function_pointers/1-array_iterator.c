#include "function_pointers.h"

/**
 * array_iterator - prints an array
 * @array: the array
 * @size: the size of array
 * @action: the function pointer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *e = array + size - 1;

	if (array && size && action)
		while (array <= e)
			action(*array++);
}
