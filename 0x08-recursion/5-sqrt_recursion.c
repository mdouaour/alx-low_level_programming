#include "main.h"
/**
 *root - returns the root of a number
 *@n:an integer that we will search for the root
 *@r:an integer ,we test rots starting from 0
 *Return:an integer ,the root af the number
 *
 */
int	root(int n, int r)
{
	if (r > n)
	{
		return (-1);
	}
	if ((r * r) == n)
	{
		return (r);
	}
	return (root(n, r + 1));


}
/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n:the number we will calculate his square root
 *Return:an integer ,the square root
 *
 *
 */
int	_sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (root(n, 0));
}
