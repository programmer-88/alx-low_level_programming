#include "lists.h"

/**
 * add_node - adds a new node at the beginning of list
 * @head: pointer to list
 * @str: string to add
 * Return: address to element
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int l;

	while (str[l])
	{
		l++;
	}

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = l;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
