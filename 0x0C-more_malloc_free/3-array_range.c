#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: input1
 * @max: input2
 * Return: the pointer to new array
*/

int *array_range(int min, int max)
{
	int i, lenth;
	int *ptr;

	if (min > max)
		return (NULL);

	lenth = max - min + 1;
	ptr = malloc(sizeof(int) * lenth);

	if (ptr == 0)
		return (NULL);
	for (i = 0; i < lenth; i++)
		ptr[i] = min++;
	return (ptr);
}
