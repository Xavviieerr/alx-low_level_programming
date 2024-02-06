#include "lists.h"
/**
 *add_nodeint_end - adds node to the end of a linked list
 *@head: head of list
 *@n: value to be added
 *
 *Return: returns pointer to new list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->next = NULL;
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
	}
	return (new);
}
