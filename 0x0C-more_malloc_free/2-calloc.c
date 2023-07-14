#include "main.h"
#include <string.h>

/**
 * _calloc - function to replace fct calloc
 * @nmemb: input1
 * @size: the size to allocate
 * Return: the string
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);

	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);

	memset(m, 0, sizeof(int) * nmemb);
	return (m);
}
