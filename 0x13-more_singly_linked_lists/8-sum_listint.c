#include "lists.h"
/**
 * sum_listint - sum up all the data
 * @head: pointer to the first node of the list
 * Return: the sum of the data
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	while (head)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
