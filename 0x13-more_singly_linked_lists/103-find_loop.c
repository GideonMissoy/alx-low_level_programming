#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the first node in the list
 * Return: address of the node where the loop starts, NULL otherwise
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *lap2, *tail;

	lap2 = tail = head;
	while (lap2 && tail && tail->next)
	{
		lap2 = lap2->next;
		tail = tail->next->next;
		if (lap2 == tail)
		{
			lap2 = head;
			break;
		}
	}
	if (!lap2 || !tail || !tail->next)
		return (NULL);
	while (lap2 != tail)
	{
		lap2 = lap2->next;
		tail = tail->next;
	}

	return (tail);
}
