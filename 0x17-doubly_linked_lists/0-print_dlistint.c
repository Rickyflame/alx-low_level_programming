#include "lists.h"

/**
 * print_dlistint - prints all element of a list
 * @h: pointer to first node
 * Return: returns the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (1);
}
