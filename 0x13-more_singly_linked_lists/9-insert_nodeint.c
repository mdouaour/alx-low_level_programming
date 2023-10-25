#include "lists.h"
#include "7-get_nodeint.c"
/**
 *insert_nodeint_at_index - insert a node in a list at an index
 *@head:a pointer to apointer to a list
 *@idx:the index where the node will be added
 *@n:the data of the new node
 *Return:a pointer to the new added node or NULL
 */
listint_t	*insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		if (n == 0)
		{
			new->next = NULL;
			*head = new;
			return (new);
		}
		else
		{
			free(new);
			return (NULL);
		}

	}
	tmp = get_nodeint_at_index(*head, idx - 1);
	if (tmp == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
