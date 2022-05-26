#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a list
 * @head: pointer to the first node
 * Return: returns the head nodes data
 */
int pop_listint(listint_t **head)
{
	int f_node;
	listint_t *temp, *next;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	next = temp->next;
	f_node = temp->n;
	free(temp);
	*head = next;
	return (f_node);
}
