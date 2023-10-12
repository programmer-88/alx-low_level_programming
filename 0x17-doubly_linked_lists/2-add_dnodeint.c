#include "lists.h"

/**
 * add_dnodeint - adds a note at the beginning of a dlistint_t list
 * @head : the head of the list
 * @n: value of dlistint_t list
 * Return: address of the new element or NULL on failure
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
