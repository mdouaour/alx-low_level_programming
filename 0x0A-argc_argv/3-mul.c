#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiplies two numbers
 *@argc:number of parameter passed to the program
 *@argv:a table of pointer to string (elements passed to the program)
 *Return:0 if two numbers are passed , 1 else
 */
int	main(int argc, char *argv[])
{
	int a, b, mult;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mult = a * b;
		printf("%d\n", mult);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
