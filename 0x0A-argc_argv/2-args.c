#include "main.h"
#include <stdio.h>
/**
 *main - prints all arguments pased in parameter
 *@argc:number of parameter
 *@argv:an array of pointer to char
 *Return:always 0 sucess
 */
int	main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
