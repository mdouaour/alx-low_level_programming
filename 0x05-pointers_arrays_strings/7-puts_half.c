#include "main.h"
/**
 *puts_half - prints half of a string, followed by a new line.
 *@str:the string input
 *
 *
 */
void	puts_half(char *str)
{
	int i = 0, len = 0;

	while (*(str + i) != '\0')
	{
		len++;
		i++;
	}
	if ((len % 2) == 0)
	{
		i = len / 2;
	}
	else
	{
		i = len - ((len - 1) / 2);
	}
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');




}
