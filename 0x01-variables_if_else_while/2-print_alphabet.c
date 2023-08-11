#include <stdlib.h>
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
		printf("%c", letter);
		letter++;
	}
	printf("\n");

	return (0);
}
