#ifndef MAIN_H
#define MAIN_H
/* putchar function*/
int _putchar(char c);

/*function that converts a binary number to an unsigned int*/
unsigned int binary_to_uint(const char *b);

/*function that prints the binary representation of a number*/
void print_binary(unsigned long int n);

/* function that returns the value of a bit at a given index*/
int get_bit(unsigned long int n, unsigned int index);

/*function that sets the value of a bit to 1 at a given index*/
int set_bit(unsigned long int *n, unsigned int index);

#endif
