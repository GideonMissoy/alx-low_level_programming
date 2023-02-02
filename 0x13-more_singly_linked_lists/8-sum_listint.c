#include "lists.h"

/**
 * sum_listint - returns sum of all the data (n) of a listint_t linked list
 * @head: pointer to the first node in the list
 * Return: sum of all data (n)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
