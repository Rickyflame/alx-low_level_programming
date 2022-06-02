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

/*function that creates a file*/
int create_file(const char *filename, char *text_content);

/*function that appends text at the end of file*/
int append_text_to_file(const char *filename, char *text_content);

#endif
