#include <stdio.h>
#include <time.h>

/**
 *main - Entry point
 *Description:'a programe that prints alphabet in lower case'
 *
 *Return:Always 0 (Success)
 *
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
		letter = 'A';
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}

