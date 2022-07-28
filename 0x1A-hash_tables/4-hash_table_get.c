#include "hash_tables.h"
/**
 * hash_table_get - function retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key you are looking for
 * Return: returns the value associated with the element
 * or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node = NULL;
	unsigned long int idx;

	if (!ht || !key)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			break;
		node = node->next;
	}
	if (!node)
		return (NULL);
	return (node->value);
}
