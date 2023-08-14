#include <stdio.h>
/**
 *main - Entry point
 *Description: 'prints all possible combinations of single-digit numbers'
 *Return: Alwats 0 (Succes)
 *
 *
 */
int main(void)
{
	int di_git = 48, com_ma = 44, spa_ce = 32;

	while (di_git <= 57)
	{
		putchar (di_git);
		if (di_git < 57)
		{
			putchar (com_ma);
			putchar (spa_ce);
		}
		di_git++;
	}
	putchar ('\n');
	return (0);
}
