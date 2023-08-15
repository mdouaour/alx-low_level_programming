#include <stdio.h>
/**
 *main -Entry point
 *Description: 'prints all possible different combinations of three digits'
 *Return: Always 0 (Succes)
 *
 */
int main(void)
{
	int i = 48, j, k;

	while (i <= 55)
	{
		j = i + 1;
		while (j <= 56)
		{
			k = j + 1;
			while (k <= 57)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				k++;
				if (i < 55)
				{
					putchar(44);
					putchar(32);
				}
			}
			j++;
		}
		i++;

	}


	putchar('\n');
	return (0);
}
