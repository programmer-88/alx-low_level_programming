#include "lists.h"

/**
 * dlistint_len - returns the length of elements in a doubly linked list
 * @h: head of the list
 * Return: number of elements in the list
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
