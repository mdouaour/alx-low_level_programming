#include <stdio.h>
/**
 *main - Entry point
 *Description: 'prints all the numbers of base 16 in lowercase'
 *Return: Always 0 (Succes)
 *
 *
 */

int main(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	i = 97;
	while (i <= 102)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
