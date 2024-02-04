#include "lists.h"
/**
 * free_list - free uo the list_t linked list
 * @head: pointer to the head
 */

void free_list(list_t *head)
{
	list_t *new_node;

	while(new_node != NULL)
	{
		head = new_node->next;
		free(new_node);
		new_node = head;
	}
}
