#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int element;
	listint_t *h;
	listint_t *current;

	if (!*head)
		return (0);

	current = *head;

	element = current->n;

	h = current->next;

	free(current);

	*head = h;

	return (element);
}
