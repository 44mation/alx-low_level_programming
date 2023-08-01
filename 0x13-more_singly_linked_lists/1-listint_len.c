#include "lists.h"

/**
 * listint_len - size of a linked lists
 * @h: the head
 * Return: the size
*/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
