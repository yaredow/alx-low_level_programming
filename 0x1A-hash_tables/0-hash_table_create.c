#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of said table
 * Return: a ptr to new table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	/* declarations */
	hash_table_t *table;

	/* if size fail */
	if (!size)
		return (NULL);
	table = calloc(1, sizeof(hash_table_t));
	/* if calloc fail */
	if (!table)
		return (NULL);
	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t *));
	/* if calloc fail */
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	/* if all is well */
	return (table);
}
