#include <stdio.h>


/**
* main - this will print its name, followed by a new line.
* @argc: count the argument
* @argv: array of pointers to the command-line arguments
* Return: 0
*/

int main(int argc, char **argv)
{
(void)argc;

printf("%s\n", argv[0]);
return (0);
}
