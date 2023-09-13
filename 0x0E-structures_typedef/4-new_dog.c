#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *str_cpy - copy a string from src to dest
 *@dest:a pointer to string dest
 *@src:a pointer to string src
 *
 */
void	str_cpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
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
	int l = 0;
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
		free(dog);
		return (NULL);
	}
	str_cpy(n, name);
	l = len(owner);
	o = (char *)malloc(sizeof(char) * l + 1);
	if (o == NULL)
	{
		free(dog);
		free(n);
		return (NULL);
	}
	str_cpy(o, owner);
	(*dog).name = n;
	(*dog).age = age;
	(*dog).owner = o;
	return (dog);
}
