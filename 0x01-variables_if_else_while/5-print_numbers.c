#include <stdio.h>

/**
 *main - Entry point
 *Description:'a programe that printsall singl digits of base 10'
 *
 *Return:Always 0 (Success)
 *
 */
int main(void)
{
	int digit = 48;

	while (digit <= 57)
	{
		printf("%c", digit);
		digit++;
	}
	printf("\n");

	return (0);
}

