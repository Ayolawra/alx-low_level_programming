#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog dog_t;

/**
 * struct dog - a type with elements
 * @name: the name element
 * @age: the age element
 * @owner: the owner element
 *
 * Description: a structure of type dog with elements
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
