#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: the elements of type list_t
 * Return: number of nodes
 */

size_t print_list(const list_t *h);
{
	size_t y = 0;

	for (; h != NULL; h = h->next, y++)

		if (h->str == NULL)
		printf("[0] (nil)\n");

	else
		printf("[%u] %s\n", h->len, h->str);

	return (y);
}
