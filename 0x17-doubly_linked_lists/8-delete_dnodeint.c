#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: head pointer
 * @index: position to delete node
 * Return: return new list
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int newIndex = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return 1;
	}
	for (; newIndex < index && temp != NULL; newIndex++)
		temp = temp->next;
	if (temp == NULL)
		return -1;
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	if (temp->prev != NULL)
		temp->prev->next = temp->next;
	free(temp);
	return 1;
}
