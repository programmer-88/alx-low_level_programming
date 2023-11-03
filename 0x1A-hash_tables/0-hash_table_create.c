#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table
 * @size: The size of the hash table
 * Return: A pointer to the newly created hash table, or NULL on failure
*/
hash_table_t *hash_table_create(unsigned int size)
{
	hash_table_t *hash_table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
	{
		return (NULL);
	}

	hash_table->size = size;
	hash_table->array = (hash_node_t **)calloc(size, sizeof(hash_node_t *));

	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	return (hash_table);
}
