#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	unsigned char *p;

	if (argc != 2)
		exit(1);

	bytes = atoi(argv[1]);

	if (bytes < 0)
		exit(2);

	p = (unsigned char *)main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", p[i]);
		if (i < bytes - 1)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
