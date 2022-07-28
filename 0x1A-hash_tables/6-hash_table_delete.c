#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table
 * return: void has no return value
 */
void hash_table_delete(hash_table_t *ht)
{
	size_t i = 0;
	hash_node_t *array = NULL, *temp = NULL;

	if (!ht)
		return;
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			array = ht->array[i];
			while (array)
			{
				free(array->key);
				free(array->value);
				temp = array;
				array = array->next;
				free(temp);
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
