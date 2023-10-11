#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *_strlen - calculate the length of a string
 *@str:the in put string
 *Return:the length
 */
int	_strlen(char *str)
{
	int l = 0;

	while (str[l] != '\0')
	{
		l++;

	}
	return (l);

}
/**
 *new_dog - creates a new dog varriable
 *@name:the dog's name
 *@age:the age of the dog
 *@owner:the owner
 *Return:a pointer to  adog
 *
 */
dog_t	*new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if ((name == NULL) || (age < 0) || (owner == NULL))
	{
		return (NULL);
	}
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	dog->age = age;
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	return (dog);
}
/**
 *_strcpy - copy chars from src to dest
 *@dest:a pointer to char ,where the string src is copied
 *@src:the string source
 *
 */
void	_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
