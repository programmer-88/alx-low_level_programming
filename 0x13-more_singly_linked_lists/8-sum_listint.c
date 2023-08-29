#include "lists.h"

/**
 * sum_listint - returns sum of all the data in linked list
 * @head: pointer to head of list
 * Return: 0 if list is empty else sum of data(n)
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);

}
