#include "main.h"
#include "_putchar.c"
/**
 *main - prints the number of arguments passed into it
 *@argc:number of arguments
 *@argv:an array of char pointers
 *Return:always 0 sucess
 */
int	main(int argc, char *argv[])
{
	(void)argv;
	_putchar(argc + 47);
	_putchar('\n');
	return (0);
}
