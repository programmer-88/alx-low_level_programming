#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given index in linked list
 * @head: pointer to head
 * @index: node to delete
 * Return: 1 on success and -1 on failure
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = NULL;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}



	while (current != NULL && count < index)
	{
		previous = current;
		current = current->next;
		count++;
	}

	if (current == NULL)
	{
		return (-1);
	}

	if (previous != NULL)
	{
		previous->next = current->next;
	}
	else
	{
		*head = current->next;
	}

	free(current);
	return (1);
}
