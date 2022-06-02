#ifndef _MAIN_H
#define _MAIN_H
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/*_putchar function*/
int _putchar(char c);

/*function that reads a text file and prints it*/
ssize_t read_textfile(const char *filename, size_t letters);


#endif
