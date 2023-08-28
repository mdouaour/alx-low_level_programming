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
 *_strpbrk -  locates the first occur in the string s of any of the bytes
 * in the string accept
 *@s:the input string
 *@accept:the set of character
 *Return:a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 *
 */
char	*_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (included(s[i], accept))
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
