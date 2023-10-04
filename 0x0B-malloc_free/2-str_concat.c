#include "main.h"
#include <stdlib.h>
/**
 *_length - calculate the length of a string
 *@s:the input string
 *Return:an integer the lenght
 *
 *
 */
int	_length(char *s)
{
	int i = 0;

	if (s == NULL)
	{
		return (i);
	}
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 *str_concat - concatenate two strings
 *@s1:the first string
 *@s2:the second string
 *Return:a pointer to the new string
 *
 */
char	*str_concat(char *s1, char *s2)
{
	int i = 0, n1, n2, j = 0;
	char *str;

	n1 = _length(s1);
	n2 = _length(s2);
	str = (char *)malloc(sizeof(char) * (n1 + n2 + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	while (i < n1)
	{
		str[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (i < (n1 + n2))
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);


}
