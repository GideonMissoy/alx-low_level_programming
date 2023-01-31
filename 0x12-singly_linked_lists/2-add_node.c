#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: head of list
 * @str: value to insert
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);

	add->len = _strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}
