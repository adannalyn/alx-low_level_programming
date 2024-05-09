#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements
 * @h: head pointer
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *new_node = h;

	while(new_node)
	{
		new_node = new_node->next;
		count++;
	}
	return (count);
}
