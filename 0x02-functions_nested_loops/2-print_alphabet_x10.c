#include"main.h"
/**
 *print_alphabet_x10 - print 10 times alphabets in lowercase
 *
 *
 */
void	print_alphabet_x10(void)
{
	int l;
	int t = 0;

	while (t <= 10)
	{
		l = 97;
		while (l <= 122)
		{
			_putchar(l);
			l++;
		}
		_putchar('\n');
		t++;
	}
}
