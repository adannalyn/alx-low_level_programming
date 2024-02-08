#include "lists.h"
/**
 * get_nodeint_at_index - return the nth node
 * @head:pointer to head
 * @index: where to add the node
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = head;

	for (i = 0; i < index; i++)
	{
		if (new_node == NULL)
			return (NULL);
		new_node = new_node->next;
	}
	return (new_node);
}
