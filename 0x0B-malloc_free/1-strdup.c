#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *@str:the input string
 *Return:a pointer to a string or NULL
 *
 *
 */
char	 *_strdup(char *str)
{
	int i = 0, n = 0;
	char *str2;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[n] != '\0')
	{
		n++;
	}
	str2 =  (char *)malloc(sizeof(char) * n);
	if (str2 == NULL)
	{
		return (NULL);
	}
	while (i < n)
	{
		str2[i] = str[i];
		i++;
	}
	return (str2);





}
