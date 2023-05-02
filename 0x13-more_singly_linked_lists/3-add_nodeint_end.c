#include "lists.h"

/**
 * add_nodeint_end - function
 * @head: pointer
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i;
	listint_t *b = *head;

	a = malloc(sizeof(listint_b));
	if (i == NULL)
return (NULL);

	i->n = n;
	i->next = NULL;

	if (*head == NULL)
	{
	*head = i;
return (i);
	}

	while (b->next)
	b = temp->next;

	b->next = i;

return (i);
}
