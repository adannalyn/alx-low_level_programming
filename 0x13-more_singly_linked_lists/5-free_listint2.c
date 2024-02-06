#include "lists.h"
/**
 * free_listint2 - free list
 * @head: pointer to head
 */
void free_listint2(listint_t **head)
{
	listint_t *new_node;

	while (*head != NULL)
	{
		new_node = *head;
		*head = (*head)->next;
		free(new_node);
	}
	return;
}
