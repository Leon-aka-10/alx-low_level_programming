#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *ptr;

	ptr = *head;

	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);

	temp->n = n;
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
