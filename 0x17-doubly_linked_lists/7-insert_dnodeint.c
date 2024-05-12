#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the first node
 * @idx: index
 * @n: data
 * Return: list of nodes
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *newNode;
	unsigned int newIdx;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (idx == 0)
	{
		newNode->next = *h;
		if (*h != NULL)
			(*h)->prev = newNode;
		*h = newNode;
		return (newNode);
	}
	for (newIdx = 0; newIdx < idx - 1 && temp != NULL; newIdx++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	newNode->next = temp->next;
	if (temp->next)
		temp->next->prev = newNode;
	temp->next =  newNode;
	newNode->prev = temp;
	return (newNode);
}
