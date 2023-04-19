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
	int index;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
			return (index);
	}

	return (-1);
}
