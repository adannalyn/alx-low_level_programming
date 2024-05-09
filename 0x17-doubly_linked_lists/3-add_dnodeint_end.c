#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end
 * @head: head pointer
 * @n: integer
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *last;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->prev = NULL;
	newNode->n = n;
	newNode->next = NULL;
	last = *head;
	if (*head == NULL)
	{
		newNode->prev = NULL;
		return (*head = newNode);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = newNode;
	return (newNode->prev = last);
}
