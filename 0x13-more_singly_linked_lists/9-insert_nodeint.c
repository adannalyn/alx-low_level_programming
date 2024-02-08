#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node
 * @head: pointer to first node in list
 * @idx: the index where to insert
 * @n: integer
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = *head;
	for (i = 2; i <= idx; i++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
