#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 *array_iterator -  executes a function given in parameter on
 * each element of an array
 *@array:an array of integers
 *@size:the size of the array
 *@action:a pointer to a function
 *
 *
 */
void	array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int long i = 0;

	if ((array == NULL) || (action == NULL))
	{
		return;
	}
	else
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
