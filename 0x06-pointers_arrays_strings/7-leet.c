#include "main.h"
/**
 *leet - encodes a string into 1337
 *@str:string that will be encoded
 *Return:a pinter to a string
 *
 *
 */
char	*leet(char *str)
{
	char replace[6] = {'4', '3', '0', '7', '1', '\0'};
	char letters[6] = {'a', 'e', 'o', 't', 'l', '\0'};
	int i = 0, j;

	while (letters[i] != '\0')
	{
		j = 0;
		while (str[j] != '\0')
		{
			if ((str[j] == letters[i]) || (str[j] == (letters[i] - 32)))
			{
				str[j] = replace[i];
				j++;
			}
			else
			{
				j++;
			}

		}
		i++;

	}
	return (str);
}
