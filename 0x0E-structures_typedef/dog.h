#ifndef DOG_H
#define DOG_H

/**
 *struct dog - a dog struct
 *@name: Poppy
 *@age: 3.5
 *@owner: Bob
 *Description: describes a dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
