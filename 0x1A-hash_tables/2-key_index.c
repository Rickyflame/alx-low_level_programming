#include "hash_tables.h"
/**
 * key_index - function gives index of a key
 * @key: is the key
 * @size: size of the array of the hash table
 * Return: Returns the index at which key/value pair should be
 * stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	if (!key || !size)
		return (0);
	idx = hash_djb2(key) % size;
	return (idx);
}
