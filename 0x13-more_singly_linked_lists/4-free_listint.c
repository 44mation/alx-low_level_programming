#include "lists.h"

/**
 * free_listint - frees the list
 * @head: the head of list
*/

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
