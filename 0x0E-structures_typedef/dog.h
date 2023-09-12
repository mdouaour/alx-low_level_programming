#ifndef DOG_H
#define DOG_H
#ifndef NULL
#define NULL ((void *)0)
#endif
/**
 *struct dog - a new type dog
 *@name:a pointer to string name
 *@age:the age of the dog
 *@owner:a pointer to string owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void	init_dog(struct dog *d, char *name, float age, char *owner);
#endif
