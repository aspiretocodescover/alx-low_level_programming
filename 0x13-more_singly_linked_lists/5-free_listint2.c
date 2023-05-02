#include "lists.h"

/**
 * free_listint2 -  a function that free a list
 * @head: pointer
 */

void free_listint2(listint_t **head)
{
listint_t *j;
if (head == NULL)
return;
while (*head)
{
j = (*head)->next;
free(*head);
*head = j;
}
*head = NULL;
}
