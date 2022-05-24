#include "lists.h"

/**
 * add_node_end - function adds a new node at the end of a list
 * @head: head of the linked list
 * @str: string to store the list
 * Return: returns the address of the newly added element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t n_char;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	for (n_char = 0; str[n_char]; n_char++)
		;

	new->len = n_char;
	new->next = NULL;
	temp = *head;
	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
