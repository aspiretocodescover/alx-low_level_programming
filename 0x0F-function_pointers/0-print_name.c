/**
 * print_name - Prints a given name
 * @name: Name to print
 * @f: Pointer to function to use for printing
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL)
return;

if (f == NULL)
return;

f(name);
}
