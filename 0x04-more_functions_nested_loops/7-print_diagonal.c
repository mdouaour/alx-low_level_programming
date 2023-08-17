#include "main.h"
/**
 *print_diagonal - draws a diagonal line on the terminal
 *@n: is the number of times the character \ should be printed
 *
 *
 *
 */
void	print_diagonal(int n)
{
	int i = 1, k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			k = i - 1;
			while (k > 0)
			{
				_putchar(32);
				k--;
			}
			_putchar(92);
			i++;
			_putchar('\n');

		}


	}






}
