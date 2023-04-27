#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds new node at the end of a list
 * @head: node beginning
 * @str: string
 * Return: Address of new element, NULL if fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t  *newnode;
	list_t *b = *head;
	unsigned int len = 0;

	while (str[len])
	len++;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)

	return (NULL);

	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = NULL;

	if (*head == NULL)
{
	*head = newnode;
	return (newnode);
}

	while (b->next)
		b = b->next;
	b->next = newnode;

	return (newnode);
}
