#include "main.h"
/**
 *_pow_recursion - returns the value of x raised by the power of y
 *@x:int x
 *@y:int y
 *Return:the value of x raised by y
 */
int	_pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));


}
