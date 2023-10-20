#include "lists.h"
#include <stdlib.h>
/**
 *free_list - frees a lis
 *@head:a pointer to a linked list
 *
 *
 *
 */
void	free_list(list_t *head)
{
	list_t *new;

	if (head == NULL)
	{
		return;
	}
	new = head->next;
	if (head->str != NULL)
	{
		free(head->str);
	}
	free(head);
	free_list(new);
}
