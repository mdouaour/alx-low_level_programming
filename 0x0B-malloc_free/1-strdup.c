#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - duplicate a string passed in parameter and  return it
 *@str:a pointer to a string
 *Return:a pointer to a string
 *
 *
 */
char	*_strdup(char *str)
{
	int  l, i = 0;
	char *str2;

	if (str == NULL)
	{
		return (NULL);
	}
	l = _length(str);
	str2 = (char *)malloc(sizeof(char) * l + 1);
	if (str2 == NULL)
	{
		return (NULL);
	}
	while (i < l)
	{
		str2[i] = str[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);

}
/**
 *_length - calculate the length of a string
 *@s:a pointer to string
 *Return:an int the length
 *
 *
 */
int	_length(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
