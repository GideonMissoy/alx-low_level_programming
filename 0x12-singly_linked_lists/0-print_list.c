#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: name of the list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int p = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		p++;
		h = h->next;
	}
	return (p);
}
