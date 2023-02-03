#include "lists.h"

/**
 * _ra - reallocates memory for an array of pointers
 * to the nodes in the linked list.
 * @list: old list to append.
 * @size: size of the new list
 * @new: new node to add to the list.
 * Return: pointer to the new list
 */

listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newlist;
	size_t p;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (p = 0; p < size - 1; p++)
		newlist[p] = list[p];
	newlist[p] = new;
	free(list);
	return (newlist);
}

/**
 * free_listint_safe - frees a listint_t linked list
 * @head: double pointer to the start of the list
 * Return: the number of nodes in the list
 */

size_t free_listint_safe(listint_t **head)
{
	size_t p, num = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (num);
	while (*head != NULL)
	{
		for (p = 0; p < num; p++)
			if (*head == list[p])
			{
				*head = NULL;
				free(list);
				return (num);
			}
		num++;
		list = _ra(list, num, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (num);
}
