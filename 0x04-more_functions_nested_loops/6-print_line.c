#include "main.h"
/**
 *print_line - draws a straight line in the terminal
 *@n:is the number of lime that the character _ should be printed
 *
 *
 */
void	print_line(int n)
{
	int i = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			_putchar(95);
			i++;
		}
		_putchar('\n');

	}
}
