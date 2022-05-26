#include "lists.h"
/**
 * print_listint - function prints all the elements of a list
 * @h: pointer to first node
 * Return: returns the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_c = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_c++;
	}
	printf("%d\n", h->n);
	return (node_c);
}
