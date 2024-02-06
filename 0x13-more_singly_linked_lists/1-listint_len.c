#include "lists.h"
/**
 *listint_len - checks number of  nodes
 *@h: list to be checked
 *
 *Return: returns count
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	int count;

	count = 0;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
