#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function
 * @h: pointer
 * Return: y
 */
size_t list_len(const list_t *h)
{
	size_t y = 0;

	for (; h != NULL; h = h->next)
	{
		y++;
	}

	return (y);
}
