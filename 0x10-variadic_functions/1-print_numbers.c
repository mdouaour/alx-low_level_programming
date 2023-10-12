#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers - prints numbers
 *@separator:string to be printed between numbers
 *@n: the number of integers passed to the function
 *
 */

void	print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list nbrs;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(nbrs, n);
	while (i < (n - 1))
	{
		printf("%d", va_arg(nbrs, int));
		if (separator != NULL)
		{
			printf("%s", separator);
			i++;
		}
		else
		{
			i++;
		}
	}
	printf("%d\n", va_arg(nbrs, int));
	va_end(nbrs);
}
