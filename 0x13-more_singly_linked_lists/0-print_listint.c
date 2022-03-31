#include "lists.h"

/**
 * print_listint - print  n elements in the list and return the count of nodes
 * @h: Linked list
 *
 * Return: the number of the nodes.
 */

size_t print_listint(const listint_t *h)
{
	int size;

	size = 0;
	while (h)
	{
		size++;
		printf("%i\n", h->n);
		h = h->next;
	}

	return (size);
}
