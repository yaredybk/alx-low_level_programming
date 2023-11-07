#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize variable of type struct dog
 * @d: a pointer to the struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;

d->name = name;
d->age = age;
d->owner = owner;
}
