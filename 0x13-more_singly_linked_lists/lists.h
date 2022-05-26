#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listsint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/*putchar function*/
int _putchar(char c);

/*function that prints all the lements of a list*/
size_t print_listint(const listint_t *h);

/*function that returns the number of elements in a linked list*/
size_t listint_len(const listint_t *h);

/*function that returns the new node at the beginning of a list*/
listint_t *add_nodeint(listint_t **head, const int n);

/*function that add a new node at the end of a list*/
listint_t *add_nodeint_end(listint_t **head, const int n);

#endif