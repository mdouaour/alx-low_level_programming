#include "main.h"
/**
 *_sqrt - calculate and returns the natural square root of a number
 *@n:the input number
 *@root:iterate every root possible starting from 0
 *Return:-1 if the root * root is grater than n else return the square root
 */
int	_sqrt(int n, int root)
{
	if ((root * root) == n)
	{
		return (root);
	}
	else if ((root * root) < n)
	{
		return (_sqrt(n, root + 1));
	}
	else
	{
		return (-1);
	}
}
/**
 *_sqrt_recursion - calculate and returns the natural square root of a number.
 *@n:the input number to calculate his square root
 *Return:-1 if n is < 0 else an integer  the natural square root of a number.
 *
 */
int	_sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, 0));
	}
}
