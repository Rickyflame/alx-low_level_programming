/* prints putchar*/
int _putchar (char c);

/* creates an array of chars*/
char *create_array(unsigned int size, char c);

/* function that returns a pointer to a newly allocated space in memory*/
char *_strdup(char *str);

/* function that concatenates two strings*/
char *str_concat(char *s1, char *s2);

/* function that returns a pointer to a 2 dimentional array of integer*/
int **alloc_grid(int width, int height);

/*function that frees a 2 dimentional grid previously created*/
void free_grid(int **grid, int height);

/*function  htat concatenates all the arguments of your program*/
char *argstostr(int ac, char **av);

/*function that splits a string into words*/
char **strtow(char *str);

