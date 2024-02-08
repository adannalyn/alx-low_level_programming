#include "lists.h"
/**
 * pop_listint - delete a node at the beginning
 * @head: pointer to head
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;

	if (head == NULL)
		return (0);
	temp = *head;
	if (temp == NULL)
	{
		return (0);
	}
	num = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (num);
}
