#include "lists.h"

/**
 * sum_listint - calcul sum of all data
 * @head:the list start
 * Return: the sum
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->next;
		head = head->next;
	}
	return (sum);
}
