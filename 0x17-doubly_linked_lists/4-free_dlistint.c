#include "lists.h"
/**
 * free_dlistint - free the node
 * @head: head pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *current;

	temp = head;
	while (temp != NULL)
	{
		current = temp;
		temp = temp->next;
		free(current);
	}
}
