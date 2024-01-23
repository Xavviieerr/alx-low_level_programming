#include "dog.h"
#include <stdio.h>
/**
 *print_dog - prints a dog
 *@d: dog structure
 *
 *Return: returns void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age < 0)
	{
		printf("Age: (nil)");
	}
	else
	{
		printf("Name: %.6f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	else
	{
		printf("Name: %s\n", d->owner);
	}
}
