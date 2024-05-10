#include "lists.h"
/**
 * get_dnodeint_at_index - prints the nth node
 * @head: pointer to first node
 * @index: unsigned integer
 * Return: new list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count  = 0;

	temp = head;
	while (temp != NULL && count < index)
	{

		temp = temp->next;
		count++;
	}

	return (temp);
}
