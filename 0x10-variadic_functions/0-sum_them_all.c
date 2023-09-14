#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - return the sum of all its paremeters
 *@n:the number of parameters
 *
 *Return:the sum of parameters
 *
 */
int	sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int s = 0;
	va_list numbers;

	if (n == 0)
	{
		return (s);
	}
	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		s += va_arg(numbers, int);
	}
	va_end(numbers);
	return (s);
}
