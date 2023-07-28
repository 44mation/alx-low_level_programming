#include "lists.h"

/**
 * list_len - calculate length of list
 * @h: the head
 * Return: the length
*/

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
