#include <stdio.h>
#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a
 * linked list_t list
 * @h: elements of type list_t
 * Return: number of elements
 */

size_t list_len(const list_t *h);
{
	size_t i = 0;

	for (; h != NULL; h = h->next)
	{
		i++
	}
		return (i);
}
