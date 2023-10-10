#include "main.h"
#include <stdlib.h>
/**
 *main - prints the name of the file it was compiled from
 *Return:always 0 sucess
 *
 *
 *
 */
int	main(void)
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
