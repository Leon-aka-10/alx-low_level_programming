#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position.
 * @head: head of a list.
 * @idx: index of the list where the new node is
 * added.
 * @n: integer element.
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current;

	if (idx)
	{
		while (i < idx - 1 && *head)
		{
			*head = *head->next;
			i++;
		}
	}
	if (!(*head) && idx)
		return (NULL);

	currrent = malloc(sizeof(listint_t));

	if (!current)
		return (NULL);
	current->n = n;

	if (!idx)
	{
		current->next = *head;
		*head = current;
	}
	else
	{
		current->next = *head->next;
		*head->next = current;
	}
	return (current);
}
