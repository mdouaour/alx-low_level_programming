#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *main - performs simple operations
 *@argc:number of parameter passed to the program
 *@argv:a pointer to char that contain parameters
 *Return:0 on sucess or 98 99 10 on errors
 *
 */
int	main(int argc, char *argv[])
{
	int result, x, y;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (((operation == op_div) || (operation == op_mod)) && (y == 0))
	{
		printf("Error\n");
		exit(100);
	}
	result = operation(x, y);
	printf("%d\n", result);
	return (0);

}
