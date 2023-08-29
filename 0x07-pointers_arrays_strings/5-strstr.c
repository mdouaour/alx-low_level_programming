#include "main.h"
/**
 *finds - find if a string s is present at the beginning of the string str
 *@str:the input string we will check if string s is present at the beginning
 *@s:the input string we are looking for in str
 *Return:1 if s is included in str at the beginning alse we return 0
 */
int	finds(char *str, char *s)
{
	int i = 0;

	while ((str[i] != '\0') && (s[i] != '\0'))
	{
		if (str[i] == s[i])
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	if ((str[i] == '\0') && (s[i] != '\0'))
	{
		return (0);
	}
	else
	{
		return (1);
	}


}
/**
 *_strstr -  locates a substring
 *@haystack:the input string that  we will search for
 * the first occur of a string
 *@needle:the substring we are looking for in haystack
 *Return:if found return a pointer to the beginning
 * of the located substring else return NULL
 *
 *
 */
char	*_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			if (finds((haystack + i), needle))
			{
				return (haystack + i);
			}
			else
			{
				i++;
			}
		}
		else
		{
			i++;
		}
	}

	return (NULL);
}
