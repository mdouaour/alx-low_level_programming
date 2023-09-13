#include <stdlib.h>
#include "function_pointers.h"
/**
 *int_index - searches for an integer
 *@array:a pointer to an array of integers
 *@size:the size of the array
 *@cmp:a pointer to a function that compare
 *Return: -1 if size <= to 0 or no element found else if the integer is found
 *in the array return the index of that element
 *
 *
 *
 */
int	int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if ((array == NULL) || (cmp == NULL) || (size <= 0))
	{
		return (-1);
	}
	while (i < size)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
