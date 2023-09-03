#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *is_number - check if a string is a number
 *@str:the input string
 *Return:1 if it is a number else 0
 *
 */
int	is_number(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (isdigit(str[i]))
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
 *main - add positives numbers
 *@argc:number of parameters passed to the program
 *@argv:an array of pointer to string
 *Return:1 if a number contain a non digit symbole else return 0
 *
 *
 */
int	main(int argc, char *argv[])
{
	int sum = 0, n, i = 1;

	while (i < argc)
	{
		if (is_number(argv[i]))
		{
			n = atoi(argv[i]);
			if (n >= 0)
			{
				sum += n;
				i++;
			}
			else
			{
			printf("Error\n");
			return (1);
			}
		}
		else
		{
		printf("Error\n");
		return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
