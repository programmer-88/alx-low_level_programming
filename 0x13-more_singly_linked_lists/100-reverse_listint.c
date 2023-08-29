#include "lists.h"

/**
 * reverse_listint - reverses a lined list
 * @head: pointer to head
 * Return: pointer to first node of linked list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;
	return (*head);
}
