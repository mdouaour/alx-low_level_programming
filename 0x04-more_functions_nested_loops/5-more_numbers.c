#include "main.h"
/*
 * more_numbers - prints 10 time the numbers from 0 to 14
 */
void	more_numbers(void)
{
	int i = 0, k = 1;

	while (k <= 10)
	{
		while (i <= 14)
		{
			if (i > 9)
			{
				_putchar(49);

			}
			_putchar((i % 10) + 48);
			i++;
		}
		i = 0;
		k++;
		_putchar('\n');
	}
}
