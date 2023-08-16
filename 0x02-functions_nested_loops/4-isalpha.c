#include"main.h"
/**
 *_isalpha - checks if a caracter is an alphabet
 *@c:the caracter that will be checked
 *Return:if c is an alphabet return 1 else return 0
 *
 */
int	_isalpha(int c)
{
	if (((c >= 97) && (c <= 122))
	|| ((c >= 65) && (c <= 90)))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
