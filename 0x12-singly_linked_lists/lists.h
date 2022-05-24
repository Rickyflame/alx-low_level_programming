#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next code
 * Description: singly linked list node struncture
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* putchar function*/
int _putchar(char c);

/*function that prints all elements of a lists_t list*/
size_t print_list(const list_t *h);

/*function that returns the number of elements in a linked list*/
size_t list_len(const list_t *h);

/*function that adds a new node at the beginning of a list*/
list_t *add_node(list_t **head, const char *str);

/*functions that adds a new node at the end of a lists*/
list_t *add_node_end(list_t **head, const char *str);

/*function that frees a list*/
void free_list(list_t *head);

#endif
