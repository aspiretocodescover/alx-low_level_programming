#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter on each
 * element of an array
 * @array: Array to iterate over
 * @size: Size of the array
 * @action: Function to apply to each element
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array && size && action)
{
for (i = 0; i < size; i++)
action(array[i]);
}
}
