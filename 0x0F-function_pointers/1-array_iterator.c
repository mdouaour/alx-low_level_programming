#include "function_pointers.h"
/**
 *array_iterator - executes a function on each element of an array
 *@array:an array of integers
 *@size:the size of the array
 *@action:a pointer to a function tha accept an int as parameter and retrn void
 *
 *
 *
 */
void	array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i = 0;

	if ((array == NULL) || (action == NULL))
	{
		return;
	}
	while (i < size)
	{
		action(array[i]);
		i++;
	}



}
