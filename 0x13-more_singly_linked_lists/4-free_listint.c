#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees memory
 * @head: start
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
