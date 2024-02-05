#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 *add_node - adds new node to a linked list
 *@head: head of list to be increased
 *@str: to be added
 *
 *Return: returns pointer to new list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
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
	new->next = *head;
	*head = new;
	return (*head);
}
