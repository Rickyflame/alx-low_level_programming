#include "lists.h"

/**
 * add_nodeint - function add a new node at the beginning
 * @head: pointer to the first node
 * @n: integer to add at the new node
 * Return: returns the address of a new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nnode;

	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
		return (NULL);

	if (*head == NULL)
		nnode->next = NULL;
	else
		nnode->next = *head;
	nnode->n = n;
	*head = nnode;

	return (*head);
}
