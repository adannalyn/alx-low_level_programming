#include "lists.h"
/**
 * add_node_end - add a node at the end
 * @head: pointer to the head node
 * @str: string of characters
 * Return: new address of element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (NULL);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
	return (new);
}
