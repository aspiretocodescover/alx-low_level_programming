#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * @head: pointer
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n);
{
listint_t *j;

j = malloc(sizeof(listint_t));
if (j == NULL)
	return (NULL);
j->n = n;
j->next = *head;

*head = j;

	return (j);
}
