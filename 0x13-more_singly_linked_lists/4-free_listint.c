#include "lists.h"
/**
 * free_listint - free list
 * @head: pointer to head
 */
void free_listint(listint_t *head)
{
	listint_t *new_node;

	while (head != NULL)
	{
		new_node = head;
		head = head->next;
		free(new_node);
	}
}
