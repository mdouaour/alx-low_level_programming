#include "main.h"
#include <stdlib.h>
/**
 *array_range - creates an array of integers ordred from min to max
 *@min:integers start from min
 *@max:integers maximum value
 *Return:a pointer to an array of integers
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
