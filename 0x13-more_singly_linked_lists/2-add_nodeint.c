#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked listint_t list.
 * @head: double pointer to the first node of a listint_t list
 * @n: integer to add to the list
 * Return: address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
