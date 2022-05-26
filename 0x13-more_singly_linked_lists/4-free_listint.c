#include "lists.h"

/**
 * free_listint - function frees a list
 * @head: pointer to the first node
 * Return: void has no return value
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}
