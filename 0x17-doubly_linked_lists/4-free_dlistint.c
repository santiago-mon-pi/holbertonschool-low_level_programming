#include "lists.h"
/**
 * free_dlistint - function that frees a list.
 * @head: list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
	free(head);
}
