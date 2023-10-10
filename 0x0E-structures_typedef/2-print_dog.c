#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *print_dog - prints a struct dog
 *@d:a pointer to the struct dog
 *
 *
 *
 *
 */
void	print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else if (d->owner != NULL)
	{
	printf("Owner: %s\n", d->owner);
	}


}
