#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of a linked list.
 * Return: no return.
 */

void free_listint(listint_t *head)
{
	listint_t *old;

	while ((old = head))
	{
		head = head->next;
		free(old);
	}
}
