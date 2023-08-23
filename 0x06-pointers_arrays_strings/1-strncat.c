#include "main.h"
/**
 * _strncat - concatenates two strings with n bytes from src
 * @dest:the destination variable of the concatenation
 * @src:the other string variable we will use n byte from
 * @n:the number of bytes at most that will be used from src
 * Return:a pointer to the resulting string dest
 *
 */
char	*_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while ((src[j] != '\0') && (j < n))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
