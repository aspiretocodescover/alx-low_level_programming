/**
 * print_name - Prints a given name
 * @name: Name to print
 * Description: This function takes a name as an argument and prints it to
 * the standard output.
 */

void print_name(char *name)
{
char *output;
size_t len;

if (name == NULL)
exit(1);

len = strlen(name);
output = malloc(len + 7); /* "Name: " plus null terminator */
if (output == NULL)
exit(1);

strcpy(output, "Name: ");
strcat(output, name);

write(STDOUT_FILENO, output, len + 7);
free(output);
}
