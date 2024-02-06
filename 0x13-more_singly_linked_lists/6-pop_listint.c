#include "lists.h"
/**
 *pop_listint - deletes the first node of a linked list
 *@head: head of the list
 *Return: returns data
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	current = *head;
	data = current->n;
	*head = current->next;
	free(current);
	return (data);
}
