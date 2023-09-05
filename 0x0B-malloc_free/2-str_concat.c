#include "main.h"
#include <stdlib.h>
/**
 *nbr_of_char - calculate the number of char in a string
 *@str:the input string
 *Return:an integer the number of char
 *
 */
int	nbr_of_char(char *str)
{
	int n = 0;

	if (str == NULL)
	{
		return (n);
	}
	else
	{
		while (str[n] != '\0')
		{
			n++;
		}
		return (n);
	}
}
/**
 *str_concat -  concatenates two strings
 *@s1:the first string
 *@s2:the second string
 *Return:a pointer to string else NULL
 *
 */
char	*str_concat(char *s1, char *s2)
{
	int i = 0, n1, n2;
	char *concat;

	n1 = nbr_of_char(s1);
	n2 = nbr_of_char(s2);
	concat = (char *)malloc((n1 + n2 + 1) * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}
	while (i < n1)
	{
		concat[i] = s1[i];
		i++;
	}

	while (i < (n1 + n2))
	{
		concat[i] = s2[i - n1];
		i++;

	}
	concat[i] = '\0';
	return (concat);

}
