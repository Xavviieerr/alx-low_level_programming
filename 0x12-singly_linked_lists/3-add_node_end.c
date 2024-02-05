#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 *add_node_end - adds new node to the end of a linked list
 *@head: head of list to be increased
 *@str: to be added
 *
 *Return: returns pointer to new list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	new = malloc(sizeof(list_t));
	if (new  == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = length;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (*head);
}
