#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: double pointer to the first node in the list.
 * @idx: index of the node to insert
 * @n: value of new node
 * Return: pointer to indexed node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int p;
	listint_t *current, *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		current = *head;
		for (p = 0; p < idx - 1 && current != NULL; p++)
			current = current->next;
		if (current == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
