#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function initializes variable of type dog 
 * @d: the struct variable
 * @name: the name variable
 * @age: the age
 * @owner: owner of dog
 *
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
