#include "function_pointers.h"

/**
 * int_index - search a number
 * @array: the array to search in
 * @size: the size of the array
 * @cmp: the function to search with
 * Return: the number index
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
