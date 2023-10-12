#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - returns the sum of all its parameters
 *@n:the number of variadic element passed in function parameter
 *Return: an int ,the sum
 *
 *
 */
int	sum_them_all(const unsigned int n, ...)
{
	int s = 0;
	unsigned int i = 0;
	va_list args;

	if (n == 0)
	{
		return (s);
	}
	va_start(args, n);
	while (i < n)
	{
		s += va_arg(args, int);
		i++;
	}
	return (s);
}
