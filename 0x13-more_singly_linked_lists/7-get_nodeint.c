#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the first node in the list
 * @index: index of the node to return
 * Return: pointer to indexed node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int p;

	if (head == NULL)
		return (NULL);
	for (p = 0; p < index; p++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
