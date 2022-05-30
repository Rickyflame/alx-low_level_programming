#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_s - singly linked list
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

/*function that frees a list*/
void free_listint(listint_t *head);

/*function that free a list*/
void free_listint2(listint_t **head);

/*function that deletes the head node of a linked list*/
int pop_listint(listint_t **head);

/*function that returns the nth node of a linked list*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/*function that returns the sum of all data*/
int sum_listint(listint_t *head);

/*function that inserts a new node at a given postion*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/*Write a function that deletes the node at index linked list*/
int delete_nodeint_at_index(listint_t **head, unsigned int index);

/*Write a function that reverses a listint_t linked list*/
listint_t *reverse_listint(listint_t **head);

/*Write a function that prints a listint_t linked list.*/
size_t print_listint_safe(const listint_t *head);

size_t free_listint_safe(listint_t **h);

listint_t *find_listint_loop(listint_t *head);
#endif
