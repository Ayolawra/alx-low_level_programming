#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - functio to print elements of a struct
 * @d: the variable that calls the struct
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}

		printf("Age: %f\n", d->age);

		if (!(d->owner))
		{
			printf("Owner: (nil)\n");
		}
		else
		{

			printf("Owner: %s\n", d->owner);
		}
	}
}
