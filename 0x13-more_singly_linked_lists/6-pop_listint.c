#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list, and
 * returns the head node's data (n).
 * @head: double pointer to the first node in list
 * Return: head node's ata, 0 otherwise
 */

int pop_listint(listint_t **head)
{
	listint_t *first;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	first = *head;
	*head = first->next;
	n = first->n;
	free(first);
	return (n);
}
