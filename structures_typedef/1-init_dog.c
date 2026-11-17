#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
