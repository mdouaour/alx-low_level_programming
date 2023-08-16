#include "main.h"
/**
 *print_sign - prints the sign of a number
 *@n:the number checked
 *Return:if n>0 then return 1, if n=0 then return 0 else return -1
 *
 *
 */
int	print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);

	}
	else
	{
		_putchar(45);
		return (-1);
	}

}
