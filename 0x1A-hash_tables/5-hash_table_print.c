#include "hash_tables.h"
/**
 * hash_table_print - functions that prints a hash table
 * @ht: hash table
 * Return: void has no return value
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int i = 0;
	int print = 0;

	if (!ht)
		return;
	putchar('{');
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			if (print == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			print = 1;
		}
		i++;
	}
	printf("}\n");
}
