#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *_calloc - allocates memory for an array, using malloc
 *@nmemb:the number of element of the array
 *@size:the size of each element
 *Return:a pointer to the allocated string
 *
 *
 */
void	*_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *str;
	void *p;

	if ((nmemb < i) || (size < i))
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	str = (char *)p;
	while (i < ((nmemb * size) / sizeof(char)))
	{
		str[i] = 0;
		i++;
	}
	return (p);



}
