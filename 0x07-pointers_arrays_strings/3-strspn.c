#include "main.h"
/**
 *included - checks if a character is included in a set of characters
 *@str:the set of charactes
 *@c:the character that will be checked
 *Return:1 if the character is included  else return 0
 */
int	included(char c, char *str)
{
	int i = 0;

	while (str[i] !=  '\0')
	{
		if (str[i] == c)
		{
			return (1);
		}
		else
		{
			i++;
		}
	}
	return (0);

}
/**
 *_strspn - gets the length of a prefix substring.
 *@s:the input string
 *@accept:the set of character
 *Return:the lenght of the substring
 *
 */
unsigned int	_strspn(char *s, char *accept)
{
	int i = 0;
	unsigned int len = 0;

	while (s[i] != '\0')
	{
		if (included(s[i], accept))
		{
			len++;
			i++;
		}
		else
		{
			return (len);
		}
	}
	return (len);
}
