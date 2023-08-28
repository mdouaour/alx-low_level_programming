#include "main.h"
/**
 *_strchr -  locate a character in a string
 *@s:the string
 *@c:the character we are looking for in the string s
 *Return:if foind the string apointer to the fisrst occur of the char else NUL
 */
char	*_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		else
		{
			i++;
		}
	}
	return (NULL);
}
