#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list
 * @head: head of the singly linked list
 * @str: string to store the list
 * Return: returns the address of new elements
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *addi;
	size_t n_char;

	addi = malloc(sizeof(list_t));
	if (addi == NULL)
		return (NULL);

	addi->str = strdup(str);

	for (n_char = 0; str[n_char]; n_char++)
		;
	addi->len = n_char;
	addi->next = *head;
	*head = addi;
	return (*head);
}
