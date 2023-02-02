#include "lists.h"

/**
 * listint_len - returns the number of elements in alinked listint_t list.
 * @h: linked list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t p = 0;

	while (h != NULL)
	{
		p++;
		h = h->next;
	}
	return (p);
}
