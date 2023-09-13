#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *len - calculate the length of a string
 *@s:the input string
 *Return:an int that is the length
 *
 *
 */
int	len(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);

}
/**
 *new_dog - creates a new dog
 *@name:the name of the dog
 *@age:the age
 *@owner:the name of the owner
 *Return:a pointer to a variable of type dog_t or NULL
 */
dog_t	*new_dog(char *name, float age, char *owner)
{
	int l = 0, i = 0;
	char *n, *o;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	l = len(name);
	n = (char *)malloc(sizeof(char) * l + 1);
	if (n == NULL)
	{
		return (NULL);
	}
	while (name[i] != '\0')
	{
		n[i] = name[i];
		i++;
	}
	n[i] = '\0';
	i = 0;
	l = len(owner);
	o = (char *)malloc(sizeof(char) * l + 1);
	if (o == NULL)
	{
		return (NULL);
	}
	while (owner[i] != '\0')
	{
		o[i] = owner[i];
		i++;
	}
	o[i] = '\0';
	(*dog).name = n;
	(*dog).age = age;
	(*dog).owner = o;
	return (dog);
}
