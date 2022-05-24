#include "lists.h"

/**
 * print_list - function prints all elements of a list
 * @h: pointer to singly linked list
 * Return: returns number of elements in a list
 */
size_t print_list(const list_t *h)
{
	size_t n_elems;

	n_elems = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n_elems++;
	}
	return (n_elems);
}
