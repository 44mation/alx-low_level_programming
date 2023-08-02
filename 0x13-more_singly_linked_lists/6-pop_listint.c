#include "lists.h"

/**
 * pop_listint - delete the head
 * @head: the head of list
 * Return: the data of the head
*/

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if(!head || !*head)
		return (0);

	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}
