#include "main.h"
#include <stdio.h>
/**
 *main - prints all arguments it receives
 *@argc:an integer ,the number of arguments passed to the program
 *@argv:a table of pointers to string
 *Return:always 0 sucess
 */
int	main(int argc, char *argv[])
{
	int count = 0;

	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	return (0);

}
