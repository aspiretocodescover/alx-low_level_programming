#include <stdio.h>

/**
* main - program prints all arguments it receives.
* @argc: num of command-line argument
* @argv: arguments array
* Return: 0
*/

int main(int argc, char **argv)
{
int a;
for (a = 0; a < argc; a++)
printf("%s\n", argv[a]);
return (0);
}
