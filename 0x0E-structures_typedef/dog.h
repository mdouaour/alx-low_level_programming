#ifndef DOG_H
#define DOG_H
/**
 *struct dog - a struct dog that contain the name , the age and the owner ofdog
 *@name:a char ponter that represent the name of a dog
 *@age:a float that represent the age of a dog
 *@owner:apointer to char that represents the name of the owner of the dog
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
