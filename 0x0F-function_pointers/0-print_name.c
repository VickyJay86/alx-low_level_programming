/**
 * print_name - prints a name using function pointers
 * @name: char type pointer to string
 * @f: pointer to a function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
