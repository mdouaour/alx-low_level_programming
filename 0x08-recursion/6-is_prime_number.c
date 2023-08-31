#include "main.h"
/**
 *is_prime - cheks if a number is prime or not
 *@n:the input number
 *@test:check is test is a divider of n
 *Return:0 if is not prime  , 1 if it is prime
 */
int	is_prime(int n, int test)
{
	if (test < n)
	{
		if ((n % test) == 0)
		{
			return (0);
		}
		else
		{
			return (is_prime(n, test + 1));
		}
	}
	return (1);
}
/**
 *is_prime_number - cheks if a number is prime or not
 *@n:the input number
 *Return: 1 if the input integer is a prime number, otherwise return 0
 *
 *
 */
int	is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime(n, 2));
	}
}
