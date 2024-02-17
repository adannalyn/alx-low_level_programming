#include "lists.h"
/**
 * free_list - free uo the list_t linked list
 * @head: pointer to the head
 */

void free_list(list_t *head)
{
	list_t *new_node;

	while(head != NULL)
	{
		new_node = head;
		head = head->next;
		free(new_node);
	}
}
