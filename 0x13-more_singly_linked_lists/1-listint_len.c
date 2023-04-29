#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - function
 * @h: header
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h);
{

	size_t  a = 0

	while (h != NULL)
	{
	h = h->next;
	a++;
	}

	return (i);
}
