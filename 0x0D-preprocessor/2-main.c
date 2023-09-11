#include <stdlib.h>
#include "main.h"
#include "_putchar.c"
/**
 *main - prints the name of the file it was compiled fromm
 *Return:always 0 success
 *
 *
 *
 */
int main(void)
{
	int i = 0;

	while (__FILE__[i] != '\0')
	{
		_putchar(__FILE__[i]);
		i++;
	}
	_putchar('\n');
	return (0);

}
