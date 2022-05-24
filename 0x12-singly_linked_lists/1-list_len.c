#include "lists.h"

/**
 * list_len - function returns the number of elements in a linked list
 * @h: singly linked list
 * Return: returns the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t n_elems;

	n_elems = 0;
	while (h != NULL)
	{
		h = h->next;
		n_elems++;
	}
	return (n_elems);
}
