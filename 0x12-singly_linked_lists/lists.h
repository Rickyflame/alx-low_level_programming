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

#endif
