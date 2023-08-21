#include "main.h"
/**
 *_strlen - returns the length of a string
 *@s:the string that we calculate the length
 *Return:an integer the length of the string
 */
int	_strlen(char *s)
{
	int len = 0, i = 0;

	while (*(s + i) != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
