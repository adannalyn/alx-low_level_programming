#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning
 * @head: head pointer
 * @n: integer
 * Return: new list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	new_node->next = (*head);
	new_node->prev = NULL;
	if ((*head) != NULL)
		(*head)->prev = new_node;
	return ((*head) = new_node);

}
