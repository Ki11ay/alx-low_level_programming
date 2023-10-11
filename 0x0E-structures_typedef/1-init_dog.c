#include "dog.h"

/**
 *init_dog - a function that initialize a variable of type struct dog
 *@name: the name of the dog
 *@age: the dog's age
 *@owner: dog's owner
 *Return: nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
