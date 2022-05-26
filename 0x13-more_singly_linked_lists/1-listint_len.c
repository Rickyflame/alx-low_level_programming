#include "lists.h"

/**
 * listint_len - function returns the number of elementsin a list
 * @h: pointer to first node
 * Return: returns the number of nodesin a list
 */
size_t listint_len(const listint_t *h)
{
	size_t elems = 1;

	if (h == NULL)
	{
		return (0);
	}
	while (h->next != NULL)
	{
		if (h->n != '\0')
			elems++;

		h = h->next;
	}
	return (elems);
}
