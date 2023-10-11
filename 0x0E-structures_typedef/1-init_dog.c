#include "dog.h"
/**
 *init_dog - initialize a varriable of type struct dog
 *@d:a ponter to a varriable of tipe struct dog
 *@name:a ponter to chat ,that represent tha name of the dog
 *@age:a float , that represent the age of a dog
 *@owner:a pointer to char that represent tha name of the owner of the dog var
 *
 *
 *
 */
void	init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
