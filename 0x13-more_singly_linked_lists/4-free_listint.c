#include "lists.h"
/**
 *free_listint - frees listint lists
 *@head: head of the list
 *
 */
void free_listint(listint_t *head)
{
	listint_t *current, *temp;

	current = head;
	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}
