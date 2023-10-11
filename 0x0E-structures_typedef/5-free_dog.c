#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *free_dog - free a dog
 *@d:apointer to a dog
 *
 *
 */
void	free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);


}
