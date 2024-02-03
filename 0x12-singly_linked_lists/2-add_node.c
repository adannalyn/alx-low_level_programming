#include "lists.h"
/**
 * add_node - new node at the beginning
 * @head: head pointer
 * @str: string
 * Return: address of new elements
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		return (new_node);
	}
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (0);
}
