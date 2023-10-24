#include "lists.h"
/**
 *free_listint - frees a lisint_t list
 *@head:a pointer to the head of the listint_t list
 *
 *
 *
 */
void	free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
