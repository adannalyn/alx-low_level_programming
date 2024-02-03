#include "lists.h"
/**
 * list-len - return the number elements
 * @h: head pointer
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	if (h != NULL)
	{
		return (h->len);
	}
	return (0);
}
