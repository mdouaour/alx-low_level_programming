#include "main.h"
/**
 *swap_int - swaps the value of 2 integer
 *@a:the first variable to be swaped
 *@b:the second variable
 */
void	swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;

}
