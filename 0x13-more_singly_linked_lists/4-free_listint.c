#include "lists.h"

/**
 * free_listint - free listint
 * @head: pointer to head
 * Return: is void
*/

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *tmp = head;

		head = head->next;
		free(tmp);
	}

}
