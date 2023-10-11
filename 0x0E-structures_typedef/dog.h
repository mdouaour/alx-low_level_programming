#ifndef DOG_H
#define DOG_H
#define NULL ((void *)0)
/**
 *struct dog - a struct dog that contain the name , the age and the owner ofdog
 *@name:a char ponter that represent the name of a dog
 *@age:a float that represent the age of a dog
 *@owner:apointer to char that represents the name of the owner of the dog
 *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void	init_dog(struct dog *d, char *name, float age, char *owner);
void	print_dog(struct dog *d);
dog_t	*new_dog(char *name, float age, char *owner);
void    _strcpy(char *dest, char *src);
int	_strlen(char *str);
#endif
