#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the beginning of the list
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
