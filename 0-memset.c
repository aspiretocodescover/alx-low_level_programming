#include "main.h"

/*
 * _menset - this fills memory with a constant byte
 * @a: pointer
 * @b: constant bytes
 * @c: First byte of memory area
 */

char *_menset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s(i) = b;
		n--
	}
	return (s);
}
