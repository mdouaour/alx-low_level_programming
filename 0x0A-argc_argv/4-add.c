#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *is_number - determine if argument is a number
 *@nbr:char pointer
 *Return:1if it is a number else 0
 *
 *
 *
 */
int	is_number(char *nbr)
{
	int i = 0;

	while (nbr[i] != '\0')
	{
		if ((nbr[i] >= 48) && (nbr[i] <= 57))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/**
 *main - adds positive numbers
 *@argc:the number of arguments
 *@argv:the parameters
 *Return:0 on sucess else 1
 */
int	main(int argc, char *argv[])
{
	int x, s = 0, i = 1;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		if (is_number(argv[i]))
		{
		x = atoi(argv[i]);
		s += x;
		i++;
		}
		else
		{
		printf("Error\n");
		return (1);
		}
	}
	printf("%d\n", s);
	return (0);



}
