#include "lists.h"

/**
 * sum_listint - returns the addition of all the data (n) of
 * a linked list.
 * @head: head of a list.
 *
 * Return: adds of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return add;
}
