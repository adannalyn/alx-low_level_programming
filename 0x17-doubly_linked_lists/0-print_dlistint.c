#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: list
 * Return: the size_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *new_node;
	size_t count;

	new_node = h;
	count = 0;
	while (new_node != NULL)
	{
		printf("%d\n", new_node->n);
		new_node = new_node->next;
		count++;
	}
	return (count);
}
