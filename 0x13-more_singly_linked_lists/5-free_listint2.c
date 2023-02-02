#include "main.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer to  first node
 * Return: 0
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
