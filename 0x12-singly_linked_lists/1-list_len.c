#include "lists.h"
/**
 *list_len -  returns the number of elements in a linked list_t list
 *@h:a pointer to a linked list_t list
 *Return:the length
 *
 */
size_t	list_len(const list_t *h)
{
	size_t nbr = 0;
	const list_t *swp;

	swp = h;
	if (swp == NULL)
	{
		return (0);
	}
	while (swp != NULL)
	{
		swp = swp->next;
		nbr++;
	}
	return (nbr);
}
