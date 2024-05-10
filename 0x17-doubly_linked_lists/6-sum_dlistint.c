#include "lists.h"
/**
 * sum_dlistint - the sum of all the data
 * @head: pointer to first node
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
