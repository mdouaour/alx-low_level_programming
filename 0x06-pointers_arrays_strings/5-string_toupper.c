#include "main.h"
/**
 *string_toupper - changes all lowercase letters of a string to uppercase
 *@str:the string that will be changed
 *Return:apointer to a string
 *
 */
char	*string_toupper(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if ((*(str + i) <= 90) && (*(str + i) >= 65))
		{
			i++;
		}
		else if ((*(str + i) <= 122) && (*(str + i) >= 97))
		{
			*(str + i) = *(str + i) - 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);



}
