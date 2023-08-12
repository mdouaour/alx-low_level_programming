#include <stdio.h>

/**
 *main - Entry point
 *Description:'prints the lowercase alphabet in reverse'
 *
 *Return:Always 0 (Success)
 *
 */
int main(void)
{
	int letter = 122;

	while (letter >= 97)
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}

