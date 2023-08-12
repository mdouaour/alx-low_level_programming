#include <stdio.h>

/**
 *main - Entry point
 *Description:'prints all singl digits of base 10 using putchar'
 *
 *Return:Always 0 (Success)
 *
 */
int main(void)
{
	int digit = 48;

	while (digit <= 57)
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');

	return (0);
}

