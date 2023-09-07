#include "main.h"
#include <stdlib.h>
/**
 *_calloc -  allocates memory for an array, using malloc
 *@nmemb:number of elements in the arrayt
 *@size:number of bytes of each elements
 *Return:a pointer to the array or NULL
 *
 *
 */
void	*_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *ch;
	unsigned int i = 0;

	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ch = (char *)ptr;

	while (i < nmemb * size)
	{
		ch[i] = 0;
		i++;
	}
	return (ptr);
}
