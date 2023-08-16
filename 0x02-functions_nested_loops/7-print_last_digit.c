#include "main.h"
/**
 *print_last_digit - calculate and print the last digit of a number
 *@n:the number we extract the last digit from
 *Return:the last digit of the number
 *
 *
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		_putchar((n % 10) + 48);
		return (n % 10);
	}
	else
	{
		n = n * (-1);
		_putchar((n % 10) + 48);
		return (n % 10);
	}
}
