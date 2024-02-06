#include "lists.h"
#include <stdio.h>

/**
 *print_listint - prints elements of linked list
 *@h: list to be operated on
 *
 *Return: returns count
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	int count;

	count = 0;
	while (current != NULL)
	{
		count++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (count);
}
