#include <stdio.h>
/**
 *print_array - prints n element of an array
 *@a:the array
 *@n:number of element to print
 *
 */
void	print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i < (n - 1))
		{
			printf("%d, ", a[i]);
			i++;
		}
		else
		{
			printf("%d", a[i]);
			i++;
		}
	}
	printf("\n");
}
