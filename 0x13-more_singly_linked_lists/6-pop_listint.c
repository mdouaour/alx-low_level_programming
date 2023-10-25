#include "lists.h"
/**
 *pop_listint - delete the head node of a listint_t
 *@head:a pointer to a pointer to listint_ list
 *Return:the heads node data n
 *
 */
int	pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if ((head == NULL) || (*head == NULL))
	{
		return (0);
	}
	n = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (n);
}
