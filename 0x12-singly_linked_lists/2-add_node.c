#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	size_t nelements = 0;

	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);

	temp->str = strdup(str);

	while (str[nelements])
	{
		nelements++;
	}
	nelements = temp->len;
	*head = temp->next;
	temp->next = temp;

	return (*head);
}
