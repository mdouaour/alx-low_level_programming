#include "main.h"
/**
 *clear_bit - set a bit at given index to 0
 *@n:the number
 *@index:the index of the bit in the number
 *Return:1 if it suceed else -1
 */
int	clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int t;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	t = 1;
	if (*n & (t << index))
	{
		t = 1;
		*n = *n ^ (t << index);
	}
	return (1);

}
