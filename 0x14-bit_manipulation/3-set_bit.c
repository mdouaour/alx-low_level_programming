#include "main.h"
/**
 *set_bit - set a bit to 1 at a given index
 *@n:the number
 *@index:the index of the bit that will be set to 1
 *Return:1 if it succed else -1
 *
 *
 */
int	set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int t;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	t = 1;
	*n = *n | (t << index);
	return (1);


}
