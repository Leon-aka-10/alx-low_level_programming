#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: head of a list.
 * Return: numbers of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		printf("%d\n", h->n);
		elements++;
		h = h->next;
	}
	return (elements);
}
