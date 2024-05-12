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
	dlistint_t *temp, *newNode;
	unsigned int newIdx;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	temp->prev = NULL;

	if (idx == 0)
	{
		temp->next = *h;
		if (*h != NULL)
			(*h)->prev = temp;
		*h = temp;
		return (temp);
	}
	newNode = *h;
	if (!newNode)
		return (NULL);
	for (newIdx = 0; newIdx < idx - 1 && newNode != NULL; newIdx++)
		newNode = newNode->next;
	if (newNode != NULL)
	{
		temp->next = newNode->next;
		if (newNode != NULL)
			newNode->next->prev = temp;
		newNode->next = temp;
		temp->prev = newNode;
	}
	return (*h);
}
