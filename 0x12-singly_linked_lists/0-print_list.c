#include "lists.h"
#include <stdio.h>
/**
 *print_list - prints the contents of a linked list
 *@h: start of the linked list
 *Return: returns
 */
size_t print_list(const list_t *h)
{
	int count;
	const list_t *currentnode = h;

	count = 0;
	while (currentnode != NULL)
	{
		if (currentnode->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		{
			printf("[%d] %s\n", currentnode->len, currentnode->str);
		}
		count++;
		currentnode = currentnode->next;
	}
	return (count);
}
