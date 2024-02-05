#include "lists.h"
/**
 *list_len -prints the length of a linked list
 *@h: list to be checked
 *
 *Return: returns: count
 *
 */
size_t list_len(const list_t *h)
{
	const list_t *current = h;
	int count;

	count = 0;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
