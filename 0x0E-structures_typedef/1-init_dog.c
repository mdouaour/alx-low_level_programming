#include "dog.h"
/**
 *init_dog - initialize a variable of type struct dog
 *@d:input pointer to a variable of type struct dog
 *@name:apointer to a string thet represent the name of the dog
 *@age:a float represent the age of the dog
 *@owner:a pointer to string represente the owner of the dog
 *
 */
void	init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (name == NULL)
	{
		(*d).name = NULL;
	}
	else
	{
		(*d).name = name;
	}
	if (owner == NULL)
	{
		(*d).owner = NULL;
	}
	else
	{
		(*d).owner = owner;
	}
	(*d).age = age;
	return;

}
