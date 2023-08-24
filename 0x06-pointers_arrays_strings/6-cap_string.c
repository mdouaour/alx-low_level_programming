#include "main.h"
/**
 *cap_string - capitalizes all words of a string
 *@str:the string that will be capitalized
 *Return:a pointer to a string
 *
 */
char	*cap_string(char *str)
{
	int i = 0;

	if ((str[i] <= 122) && (str[i] >= 97))
	{
		str[i] = str[i] - 32;
		i++;
	}
	while (str[i] != '\0')
	{
		if ((str[i] == 32) || (str[i] == 9) || (str[i] == 10)
		|| (str[i] == 44) || (str[i] == 59) || (str[i] == 46)
		|| (str[i] == 33) || (str[i] == 63) || (str[i] == 34)
		|| (str[i] == 40) || (str[i] == 41) || (str[i] == 123)
		|| (str[i] == 125))
		{
			if ((str[i + 1] <= 122) && (str[i + 1] >= 97))
			{
				str[i + 1] = str[i + 1] - 32;
				i++;
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
	return (str);
}
