#include "lists.h"
/**
 * add_node - adds a node to the beginning of list
 * @head: address of pointer to head node
 * @str: new string to add in the node
 * Return: size of list
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dub;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
