#include "lists.h"

/**
 * print_listint_safe - print a linked list
 * @head: pointer to head
 * Return: number of nodes in list
*/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp_n = NULL;
	const listint_t *_n = NULL;
	size_t count = 0;
	size_t new_n;

	tmp_n = head;
	while (tmp_n)
	{
		printf("[%p] %d\n", (void *)tmp_n, tmp_n->n);
		count++;
		tmp_n = tmp_n->next;
		_n = head;
		new_n = 0;

		while (new_n < count)
		{
			if (tmp_n == _n)
			{
				printf("-> [%p] %d\n", (void *)tmp_n, tmp_n->n);
				return (count);
			}
			_n = _n->next;
			new_n++;
		}
		if (!head)
		{
			exit(98);
		}
	}
	return (count);
}
