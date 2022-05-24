#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *ptr;
	size_t nelements = 0;
	ptr = *head;

	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);

	temp->str = strdup(str);

	while (str[nelements])
	{
		nelements++;
	}

	temp->len = nelements;
	temp->next = NULL;

	if (!ptr)
		*head = temp;
	else
	{
		while (ptr->next)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}

	return (*head);
}
