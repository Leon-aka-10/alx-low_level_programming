#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *previous;
	listint_t *current;

	if (head)
	{
		current = *head;
		while ((previous = current))
		{
			current = current->next;
			free(previous);
		}
		*head = NULL;
	}
}
