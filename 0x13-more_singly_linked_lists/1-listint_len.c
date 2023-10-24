#include "lists.h"
/**
 *listint_len - return the number of elements in a likked list listint_t
 *@h:a pointer to a list_t list
 *Return:the number of elements
 *
 */
size_t	listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *swp;

	swp = h;
	while (swp != NULL)
	{
		swp = swp->next;
		i++;
	}
	return (i);
}
