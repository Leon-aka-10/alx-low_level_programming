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
	int hnode;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;

	headnode = temp->n;

	*head = temp->next;

	free(temp);

	return (hnode);
}
