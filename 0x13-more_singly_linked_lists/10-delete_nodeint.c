#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *previous;
	listint_t *current;

	previous = *head;

	if (index)
	{
		for (i = 0; i < index - 1 && previous; i++)
		{
			previous = previous->next;
		}
	}

	if (!previous || (!(previous->next) && index))
	{
		return (-1);
	}

	current = previous->next;

	if (index)
	{
		previous->next = current->next;
		free(current);
	}
	else
	{
		free(previous);
		*head = current;
	}

	return (1);
}
