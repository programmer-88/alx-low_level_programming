#include "lists.h"

/**
 * listint_len - returns the number of length of a linked list
 * @h: pointer to head
 * Return: length of a linked list
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
