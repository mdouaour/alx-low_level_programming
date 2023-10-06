#include "main.h"
/**
 *main - prints its name
 *@argc:number of arguments passed to the programme
 *@argv:table of char pointers , arguments
 *Return:always 0 sucess
 */
int	main(int argc, char *argv[])
{
	(void)argc;
	while (*(argv[0]) != '\0')
	{
		_putchar(*(argv[0]));
		argv[0]++;
	}
	_putchar('\n');
	return (0);
}
