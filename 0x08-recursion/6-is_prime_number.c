#include "main.h"
/**
 *deviders - find if there is a divider
 *@n:the input n that will be checked for deviders
 *@d:deviders
 *Return:1 if prime else 0
 *
 */
int	deviders(int n, int d)
{
	if (n == d)
	{
		return (1);
	}
	if ((n % d) == 0)
	{
		return (0);
	}
	return (deviders(n, d + 1));

}
/**
 *is_prime_number - returns 1 if the input number is prime else 0
 *@n:the input number
 *Return:1 if is prime else 0
 *
 */
int	is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	if ((n == 0) || (n == 1))
	{
		return (1);
	}
	return (deviders(n, 2));

}
