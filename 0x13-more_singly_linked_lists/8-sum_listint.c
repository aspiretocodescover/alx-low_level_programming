#include "lists.h"

/**
 * sum_listint -  a function that returns the sum of all data
 * @head: a pointer
 * Return: sum of all data
 */

int sum_listint(listint_t *head)
{
	int j = 0;

	while (head)

	{
	j += head->n;
	head = head->next;
	}
	return (j);
}
