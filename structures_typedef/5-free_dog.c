#include "dog.h"
#include <stdlib.h>
#include "main.h"

/**
 * free_dog - this will free the memory of the dogs.(structs)
 * @d: pointer to the dog struct.
 *
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}