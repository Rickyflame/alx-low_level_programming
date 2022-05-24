#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: head of the singly linked list
 * Return: void has no return value
 */
void free_list(list_t *head)
{
	list_t *freed;

	while ((freed = head) != NULL)
	{
		head = head->next;
		free(freed->str);
		free(freed);
	}
}
