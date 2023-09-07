#include "main.h"
#include <stdlib.h>
/**
 *_length - calculate the length of a string
 *@s:the input string
 *Return:an unsigned int
 *
 */
unsigned int	_length(char *s)
{
	unsigned int i = 0;

	if (s == NULL)
	{
		return (i);
	}
	else
	{
		while (s[i] != '\0')
		{
			i++;
		}
	}
	return (i);
}
/**
 *string_nconcat - concatenates two strings.
 *@s1:the address of the first string
 *@s2:the address of the second string
 *@n:n bytes are copied from s2
 *Return:a pointer to the new string or NULL
 *
 */
char	*string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int n1, n2, n3, i = 0;
	char *str;

	n1 = _length(s1);
	n2 = _length(s2);
	if (n >= n2)
	{
		n3 = n1 + n2;
	}
	else
	{
		n3 = n1 + n;
	}
	str = malloc(n3 + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	while (i < n1)
	{
		str[i] = s1[i];
		i++;
	}
	while (i < n3)
	{
		str[i] = s2[i - n1];
		i++;
	}
	str[i] = '\0';
	return (str);
}
