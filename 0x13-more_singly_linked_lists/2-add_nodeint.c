#include "lists.h"
#include <stdlib.h>
/**
 *add_nodeint - adds node at the start
 *@head: begining of linked list
 *@n: value
 *Return: returns pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (head == NULL)
	{
		new->next = NULL;
		new->n = n;
		head = &new;
	}
	else
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
	return (new);
}
