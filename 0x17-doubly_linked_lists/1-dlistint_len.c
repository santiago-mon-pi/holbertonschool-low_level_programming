#include "lists.h"
/**
 * dlistint_len - function that returns number of elements in linked list
 * @h: list
 * Return: the number of nodes (Success)
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n_nodes = 0;

	while (h)
	{
		n_nodes++;
		h = h->next;
	}
	return (n_nodes);
}
