#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - allocates a memory using malloc
 *@b:number of bytes to allocate
 *Return:apointer to the allocated memory
 *
 *
 *
 */
void	*malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);


}
