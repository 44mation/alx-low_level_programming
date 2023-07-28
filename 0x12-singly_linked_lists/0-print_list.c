#include "lists.h"

/**
 * _strlent - calculate the lenght of the string
 * @s: the string to calulate
 * Return: the lenght
*/

int _strlent(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * print_list -prints linked lists
 * @h: pointer to head
 * Return: size of the list
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlent(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
