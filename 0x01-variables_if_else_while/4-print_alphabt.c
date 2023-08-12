#include <stdio.h>
#include <time.h>

/**
 *main - Entry point
 *Description:'a programe that prints alphabet in lower case exept q and e'
 *
 *Return:Always 0 (Success)
 *
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if ((letter == 'q') || (letter == 'e'))
		{
			letter++;
		}
		else
		{
			putchar(letter);
			letter++;
		}
	}
	putchar('\n');
	return (0);
}
