#include "main.h"
/**
 *_strcmp - compare two strings
 *@s1:first string to  be compared
 *@s2:second string to be compared
 *Return:return an integer less than, equal to, or greater than zero
 *
 */
int	_strcmp(char *s1, char *s2)
{
	int i = 0, cmp = 0;

	while ((s1[i] != '\0') && (s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			cmp = s1[i] - s2[i];
			return (cmp);
		}

	}
	if ((s1[i] == '\0') && (s2[i] == '\0'))
	{
		return (cmp);
	}
	else if (s1[i] != '\0')
	{
		cmp = s1[i];
		return (cmp);
	}
	else
	{
		cmp = s2[i] * -1;
		return (cmp);
	}




}
