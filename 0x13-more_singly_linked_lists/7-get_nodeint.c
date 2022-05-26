#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: pointer to the first node
 * @index: number of node to access
 * Return: returns the number of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;
	return (head);
}
