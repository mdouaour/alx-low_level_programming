#include "lists.h"
/**
 *add_nodeint_end - adds a node at the end of a listint_t list
 *@head:a pointer to a pointer to the head of a listint_t list
 *@n:the data of the new node
 *Return:a pointer to the new node or NULL if it fail
 *
 */
listint_t	*add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;

	}
	return (new);


}
