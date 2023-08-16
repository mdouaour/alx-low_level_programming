#include "main.h"
/**
 *first_digit - return the first digit of a number with 2 digit
 *@n:the number we extract first digit
 *Return:the first digit of the number n
 *
 *
 */
int	first_digit(int n)
{
	return (n / 10);
}
/**
 *last_digit - return the last digit of a number of 2 digit
 *@n2:the number we extract last digit
 *Return:the first digit of the number n
 *
 */

int	last_digit(int n2)
{
	return (n2 % 10);
}
/**
 *time_table - prints a single time table
 *@m:the table that will be printed
 */

void	time_table(int m)
{
	int j = 1;

	_putchar('0');
	while (j <= 9)
	{
		if ((j * m) < 10)
		{
			_putchar(44);
			_putchar(32);
			_putchar(32);
			_putchar((j * m) + 48);
			j++;
		}
		else
		{
			_putchar(44);
			_putchar(32);
			_putchar(first_digit(j * m) + 48);
			_putchar(last_digit(j * m) + 48);
			j++;
		}
	}

}
/**
 *times_table - prints 9 time table
 *
 *
 *
 */

void	times_table(void)
{
	int i = 0;

	while (i <= 9)
	{
		time_table(i);

		i++;
		_putchar('\n');

	}
}
