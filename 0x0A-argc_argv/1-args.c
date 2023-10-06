#include "main.h"
#include <stdio.h>
/**
 *main - prints the number of arguments passed into it
 *@argc:number of arguments
 *@argv:an array of char pointers
 *Return:always 0 sucess
 */
int	main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", (argc - 1));


	return (0);
}
