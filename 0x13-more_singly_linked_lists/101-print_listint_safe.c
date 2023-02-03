#include "lists.h"

/**
 * _r - reallocates memory for an array of pointers
 * to the nodes in a linked list.
 * @list: the old list to append
 * @size: size of the new list.
 * @new: new node to add to the list.
 * Return: pointer to the new list
 */

const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
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
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the start of the list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t p, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (p = 0; p < num; p++)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			free(list);
			return (num);
		}
	}
	num++;
	list = _r(list, num, head);
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	return (num);
}
