#include "lists.h"
#include <stdlib.h>
/**
 *free_list - frees unused list
 *@head: pointer to the list
 *
 *Return: returns void
 *
 */
void free_list(list_t *head)
{
	list_t *current, *temp;

	current = head;

	while (current != NULL)
	{
		temp = current->next;
		free(current->str);
		free(current);
		current = temp;
	}
}
