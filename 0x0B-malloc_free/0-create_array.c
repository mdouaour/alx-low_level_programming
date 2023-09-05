#include "main.h"
#include <stdlib.h>
/**
 *create_array -  creates an array of chars, and initializes it with a char
 *@size:the size of the array
 *@c:the char that will initializes the array
 *Return:a pointer to char or NULL
 */
char	*create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (s);
	}
	else
	{
		while (i < size)
		{
			*(s + i) = c;
			i++;
		}



		return (s);
	}
}
