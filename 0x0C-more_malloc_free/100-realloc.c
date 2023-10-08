#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr:the pointer that wil be realocated
 *@old_size:the size of ptr
 *@new_size:the size of the new block of memory that ptr will be allocated in
 *Return:a pointer the the new allocated block of memory
 *
 *
 *
 */
void	*_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			return (NULL);
		}
		return (p);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	p = malloc(new_size);
	if (p == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		init(p, (char *)ptr, (old_size / sizeof(char)));
		free(ptr);
		return ((void *)p);
	}
	else
	{
		init(p, (char *)ptr, (new_size / sizeof(char)));
		free(ptr);
		return ((void *)p);
	}
}
/**
 *init - initialize the pointer p with n element from pointer str
 *@p:the new pointer that
 *@ptr:the old pointer
 *@n:the number of elements that are copied from ptr to p
 *
 */
void	init(char *p, char *ptr, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		p[i] = ptr[i];
		i++;
	}
}
