#include "lists.h"
#include <stdio.h>
/**
 *print_list - prints elements of a linked lists
 *@h:a linked list
 *Return:the number of element in the list
 *
 */
size_t	print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *tmp;

	if (h == NULL)
	{
		return (0);
	}
	tmp = h;
	while (tmp != NULL)
	{
		if (tmp->str == NULL)
		{
			printf("[0] (nil)\n");
			i++;
			tmp = tmp->next;
		}
		else
		{
			printf("[%lu] %s\n", tmp->len, tmp->str);
			i++;
			tmp = tmp->next;
		}
	}
	return (i);
}
