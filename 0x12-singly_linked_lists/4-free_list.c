#include "lists.h"
/**
 * free_list - free uo the list_t linked list
 * @head: pointer to the head
 */

void free_list(list_t *head)
{
	head = malloc(sizeof(list_t));

	free(head);
}
