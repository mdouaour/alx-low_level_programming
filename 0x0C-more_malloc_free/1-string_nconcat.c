#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *_length - returns the length of a string
 *@str:the input string that will calculate the length
 *Return:the length
 *
 */
int	_length(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		return (i);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 *string_nconcat - concatenates two strings
 *@s1:the first string
 *@s2:thesecond string
 *@n:n caracter from s2 are concatenated with s1
 *Return:a pointer to the new string
 *
 */
char	*string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, i = 0, j = 0;
	char *s;

	l1 = _length(s1);
	l2 = _length(s2);
	if (n <= l2)
	{
		s = malloc(sizeof(char) * (l1 + n + 1));
	}
	else
	{
		s = malloc(sizeof(char) * (l1 + l2 + 1));
	}
	if (s == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	while ((s2[j] != '\0') && (j < n))
	{
		s[i] = s2[j];
		j++;
		i++;
	}
	s[i] = '\0';
	return (s);
}
