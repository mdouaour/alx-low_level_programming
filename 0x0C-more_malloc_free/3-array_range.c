#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *array_range - creates an array of integers
 *@min:the integers starts from the value of min
 *@max:integers of the array stop at value max
 *Return:a pointer to the array of integers
 *
 */
int	*array_range(int min, int max)
{
	int i = 0, n;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	n = max - min + 1;
	arr = malloc(sizeof(int) * n);
	if (arr == NULL)
	{
		return (NULL);
	}
	while (i < n)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
