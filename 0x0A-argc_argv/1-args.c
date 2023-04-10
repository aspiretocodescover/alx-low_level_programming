#include <stdio.h>

/**
* main - prints the number of arguments passed into a program
* @argc: number of argument count
* @argv: array of pointers to arguments
* Return: 0
*/

int main(int argc, char **argv)
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
