#include "main.h"
/**
 *_strncpy - copy n bytes from a string src to dest
 *@dest:destination of the copie
 *@src:the string we copie from
 *@n:the number of bytes to copi from src to dest
 *Return:pointer to a string
 */
char	*_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*(dest + i) = src[i];
	}
	for ( ; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
