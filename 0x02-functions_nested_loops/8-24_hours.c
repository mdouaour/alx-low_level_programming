#include "main.h"
/**
 *jack_bauer - prints every minute of the day, from 00:00 to 23:59
 *
 *
 *
 */
void	jack_bauer(void)
{
	int h1 = 0, h2 = 0, m1 = 0, m2 = 0, h = 9;

	while (h1 <= 2)
	{
		if (h1 == 2)
		{
			h = 3;
		}



		while (h2 <= h)
		{

			while (m1 <= 5)
			{

				while (m2 <= 9)
				{
					_putchar(h1 + 48);
					_putchar(h2 + 48);
					_putchar(58);
					_putchar(m1 + 48);
					_putchar(m2 + 48);
					_putchar('\n');
					m2++;
				}
				m2 = 0;
				m1++;
			}
			m1 = 0;
			h2++;
		}
		h2 = 0;
		h1++;
	}

}
