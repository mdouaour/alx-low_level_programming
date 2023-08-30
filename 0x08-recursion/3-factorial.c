#include "main.h"
/**
 *factorial - returns the factorials of a given number
 *@n:the input number
 *Return:an integer,the factorial of a given number
 *
 */
int	factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
