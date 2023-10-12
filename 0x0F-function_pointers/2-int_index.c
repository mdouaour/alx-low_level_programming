#include "function_pointers.h"
/**
 *int_index - searches for an integer
 *@array: an array of integers
 *@size:the size of the array
 *@cmp:a pointer to function thet check for a number
 *Return:the index of the number ,else -1
 *
 */
int	int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if ((array == NULL) || (size <= 0) || (cmp == NULL))
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
