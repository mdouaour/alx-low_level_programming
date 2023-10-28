#include "main.h"
/**
 *get_bit - returns the value of a bit at a given index
 *@n:unsigned long int , look into it for the value of a bit at the given index
 *@index:the index of the bit we are looking for
 *Return:the value of the bit at the given address or -1 if error
 *
 *
 *
 */
int	get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int t;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	t = 1;
	if (n & (t << index))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
