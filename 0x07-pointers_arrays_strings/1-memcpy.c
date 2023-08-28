#include "main.h"
/**
 *_memcpy - copies n bytes from memory area src to memory area dest
 *@dest:n bytes copied in dest
 *@src:n bytes copied from src
 *@n:number of bytes copied
 *Return:a pointer to dest
 */
char	*_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);


}
