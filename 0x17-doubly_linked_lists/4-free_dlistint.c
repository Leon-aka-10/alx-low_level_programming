#include "lists.h"

/**
* free_dlistint - frees a dlistint_t list
*
* @head: head of the list
* Return: no return
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head)
		while (head->prev)
			head = head->prev;

	while ((tmp = head))
	{
		head = head->next;
		free(tmp);
	}
}
