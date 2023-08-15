#include <stdio.h>
/**
 *main -Entry point
 *Description:'prints all possible different combinations of two digits'
 *Return:Always 0 (Succes)
 */
int main(void)
{
	int i = 48, j;

	while (i < 57)
	{
		j = i + 1;
		while (j <= 57)
		{
			putchar(i);
			putchar(j);
			j++;
			if (i < 56)
			{
				putchar(44);
				putchar(32);
			}

		}
	i++;
	}

	putchar('\n');
	return (0);
}
