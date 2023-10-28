#include "main.h"
/**
 *print_binary - prints the binary representation of a number
 *@n:unsigned long int , will be printed in binary
 *
 *
 */
void	print_binary(unsigned long int n)
{
	int i = 0, z = 0;
	int nbr_bits = sizeof(unsigned long int) * 8;
	unsigned long int t;

	if  (n == 0)
	{
		_putchar('0');
		return;
	}
	i = (nbr_bits - 1);
	while (i >= 0)
	{
		t = 1;
		if (n & (t << i))
		{
			_putchar('1');
			i--;
			if (z == 0)
			{
				z = 1;
			}
		}
		else
		{
			if (z)
			{
				_putchar('0');
				i--;
			}
			else
			{
				i--;
			}

		}
	}
}
