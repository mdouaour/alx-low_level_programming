#include "lists.h"
/**
 *print_listint - prints all elements of a listint_t list
 *@h:a pointer to a listint_t
 *Return:the number of nodes
 *
 */
size_t	print_listint(const listint_t *h)
{
	const listint_t *tmp;
	size_t i = 0;

	if (h == NULL)
	{
		return (0);
	}
	tmp = h;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		i++;
	}
	return (i);
}
