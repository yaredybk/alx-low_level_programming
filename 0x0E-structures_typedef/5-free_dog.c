#include "dog.h"
#include <stdlib.h>

/**
*free_dog - function to free space
*@d: dog to be freed
*Return: return success
*/
void free_dog(dog_t *d)
{
if (d == NULL)
return;

free(d->name);
free(d->owner);
free(d);
}
