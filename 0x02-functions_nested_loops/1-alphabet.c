#include"main.h"
/**
 *print_alphabet - prints alphabets in lowercase followed by a new line
 *
 *
 */
void print_alphabet(void)
{
	int l = 97;

	while (l <= 122)
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
