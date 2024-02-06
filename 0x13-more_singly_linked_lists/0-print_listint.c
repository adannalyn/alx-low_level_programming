#include "lists.h"
/**
 * print_listint - print all elements
 * @h: pointer to head
 * Return: size of the elements
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
