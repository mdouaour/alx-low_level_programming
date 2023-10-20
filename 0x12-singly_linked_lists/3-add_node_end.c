#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *add_node_end - adds a node at the end of a linked list
 *@head:a pointer to a pointer to a linked list
 *@str:the string that will be added
 *Return:a pointer to a linked list
 */
list_t	*add_node_end(list_t **head, const char *str)
{
	list_t *new, *swp;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		swp = *head;
		while (swp->next != NULL)
		{
			swp = swp->next;
		}
		swp->next = new;
	}
	return (new);

}
