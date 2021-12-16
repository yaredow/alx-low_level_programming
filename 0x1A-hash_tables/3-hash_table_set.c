#include "hash_tables.h"

/**
 * hash_table_set - adds an element to table, checks first
 * @ht: the table
 * @key: the key
 * @value: the thing to add
 * Return: 1 on success, or 0 on fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/* declarations */
	hash_node_t *new, *head;
	unsigned long int index;

	/* check for table, key, value */
	if (!(ht && key && *key && value))
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];
	new = NULL;

	/* look for place to add */
	while (head)
	{
		if (!strcmp(key, head->key))
		{	/* value must be duped */
			char *newval = strdup(value);
			/* check for bad value */
			if (!newval)
				return (0);
			free(head->value);
			head->value = newval;
			return (1);
		}
		head = head->next;
	}
	new = make_node(key, value);
	/* check fail */
	if (!new)
		return (0);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
/**
 * make_node - adds element to hash table/ chains
 * @key: where to add it
 * @value: what to add
 * Return: 1 on success, 0 otherwise
 */
hash_node_t *make_node(const char *key, const char *value)
{
	/* declarations */
	hash_node_t *new;

	new = calloc(1, sizeof(hash_node_t));
	/* if calloc fail */
	if (!new)
		return (0);
	new->key = strdup(key);
	/* if bad key */
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	/* if bad thing */
	if (!new->value)
	{
		free(new->key);
		free(new);
		return (0);
	}
	/* if all is well */
	return (new);
}
