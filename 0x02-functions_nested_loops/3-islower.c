#include"main.h"
/**
 *_islower - checks if a caracter is lowercase
 *@c: the caracter that will be checked
 *Return: if lowcase return 1 else return 0
 *
 */
int	_islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}


}
