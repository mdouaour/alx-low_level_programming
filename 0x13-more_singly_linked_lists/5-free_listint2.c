#include "lists.h"
/**
 *free_listint2 - frees a list and sets the head to NULL
 *@head:pointer to pointer to a list
 *
 *
 *
 */
void	free_listint2(listint_t **head)
{
	listint_t *new_head;

	if (*head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		new_head = (*head)->next;
		free(*head);
		*head = new_head;
	}


}
