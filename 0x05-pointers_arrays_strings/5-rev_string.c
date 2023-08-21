#include "main.h"
/**
 *rev_string - reverses a string
 *@s: the string that will be reversed
 *
 */
void	rev_string(char *s)
{
	int i = 0, len = 0;
	char swap;

	while (*(s + i) != '\0')
	{
		len++;
		i++;
	}
	i = 0;
	while (i < (len / 2))
	{
		swap = *(s + (len - i - 1));
		*(s + (len - i - 1)) = *(s + i);
		*(s + i) = swap;
		i++;
	}
}
