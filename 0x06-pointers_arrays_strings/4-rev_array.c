#include "main.h"
/**
 *reverse_array - reverses the content of an array of integers
 *@a:the array of integers
 *@n:number of elements of the array
 *
 */
void	reverse_array(int *a, int n)
{
	int i = 0, swap;

	while (i < (n / 2))
	{
		swap = *(a + i);
		*(a + i) = *(a + n - i - 1);
		*(a + n - i - 1) = swap;
		i++;
	}
}

