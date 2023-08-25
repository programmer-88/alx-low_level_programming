#include "lists.h"

/**
 * free_list - frees a liked list
 * @head: head of list to free
 * Return: is void
*/

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}

}
