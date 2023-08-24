#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct list_t - single linked list
 * @str: string
 * @len: string length
 * @next: next node
*/

typedef struct list_t
{
	char *str;
	unsigned int len;
	struct list_t *next;
} list_t;

size_t print_list(const list_t *h);

#endif
