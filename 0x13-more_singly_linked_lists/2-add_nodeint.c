#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * @head: pointer
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n);
{
listint_t *i;

i = malloc (sizeof (listint_t));
if (i == NULL)
	return (NULL);
i->n = n;
i->next = *head;

}
