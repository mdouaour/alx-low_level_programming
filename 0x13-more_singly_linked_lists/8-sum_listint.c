#include "lists.h"
/**
 *sum_listint - calculate the sum of all the data (n) of a list
 *@head:a pointer to a list
 *Return:the sum
 *
 *
 *
 */
int	sum_listint(listint_t *head)
{
	listint_t *swp;
	int sum = 0;

	if (head == NULL)
	{
		return (sum);
	}
	swp = head;
	while (swp != NULL)
	{
		sum = sum + swp->n;
		swp = swp->next;
	}
	return (sum);
}
