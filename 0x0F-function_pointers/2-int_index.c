#include <stdio.h>

/**
 * int_index - function that searches for an integer.
 * @size: is the number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 * @array: size of the array
 * Return: 0 and -1 if no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
if (!array || !cmp || size <= 0)
		return (-1);

	int i = 0;

	do {
	if (cmp(array[i]))
	return (i);
	} while (++i < size);

return (-1);
}
