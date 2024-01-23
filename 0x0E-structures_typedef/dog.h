#ifndef DOG_H
#define DOG_H

/**
 *struct dog - structure dog
 *@name: first value
 *@age: second value
 *@owner: third value
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
