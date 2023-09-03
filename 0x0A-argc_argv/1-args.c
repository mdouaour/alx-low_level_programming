#include "main.h"
#include <stdio.h>
/**
 *main - prints the number of arguments passed into it
 *@argc:the number of arguments including the name of the program and NULL
 *@argv:a table of pointer to string
 *Return:always 0 sucess
 */
int	main(int argc, char *argv[])
{
	int count = argc - 1;

	printf("%d\n", count);
	argv++;
	return (0);

}
