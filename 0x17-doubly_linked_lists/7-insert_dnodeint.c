#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *insert_dnodeint_at_index - inserts a node at a given index
 *@h: points to a pointer to a dlistint_t
 *@idx: the index of the new node
 *@n: an integer , the data of the node
 *Return: a pointer to the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *new, *pr, *nxt;
	unsigned int i = 0;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	while ((i <= idx) && (current != NULL))
	{
		if (i == idx)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
			{
				return (NULL);
			}
			new->n = n;
			pr = current->prev;
			nxt = current->next;
			pr->next = new;
			new->prev = pr;
			new->next = nxt;
			if (nxt != NULL)
				nxt->prev = new;
			return (new);
		}
		i++;
		current = current->next;
	}
	if ((current == NULL) && (idx == i))
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	return (NULL);


}
