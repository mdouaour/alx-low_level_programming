#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *main - multiplies two numbers
 *@argc:the number of arguments
 *@argv:an array of pointer to char , the arguments
 *Return:0 if two arguments are pased , else 1
 *
 */
int	main(int argc, char *argv[])
{
	int x, y, s;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	s = x * y;
	printf("%d\n", s);
	return (0);
}
