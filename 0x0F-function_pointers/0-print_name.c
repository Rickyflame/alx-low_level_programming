/**
 * print_name - prints the name
 * @name: input name
 * @f: function pointer
 * Return: void has no return value
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
