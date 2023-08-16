#include "main.h"
/**
 *_abs - compute the absolute value of an integer
 *@n:the number that will be computed
 *Return:return the absolute value of the number
 *
 */
int	_abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * (-1));
	}

}
