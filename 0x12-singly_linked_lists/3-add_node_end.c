 Return: new address of element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = *head;

	new = malloc(sizeof(list_t));
	while (new->next != NULL)
	{
		new = new->next;
	}

	new->str = strdup(str);
	new->next->str = str;
	new->next->next = NULL;
	return (new);
}
