#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end
 * @head: pointer to the first node
 * @n: integer to add at the end
 * Return: returns the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nnode_end, *temp;

	nnode_end = malloc(sizeof(listint_t));
	if (nnode_end == NULL)
		return (NULL);
	nnode_end->n = n;
	nnode_end->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = nnode_end;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = nnode_end;
	}
	return (*head);
}
