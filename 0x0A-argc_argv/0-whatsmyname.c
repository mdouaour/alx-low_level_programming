#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *main - prints its name
 *@argc:an integer containing the number of arguments passed to the program
 *@argv:an array of pointer to string
 *Return:always 0 sucess
 *
 */
int	main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);

}
