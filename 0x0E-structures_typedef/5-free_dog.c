#include <stdlib.h>

#include "dog.h"



/**
* free_dog - freeing allocated memory to struct
* @d: string to free
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
