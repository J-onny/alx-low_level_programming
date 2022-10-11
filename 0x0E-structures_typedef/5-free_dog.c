#include "dog.h"
#include <stdlib.h>

/**
  *free_dog - Frees the allocated memory to dog
* @d: Dog to be freed
  */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
