#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *@head: points to the head of the list
 *@index: the index of the node
 *Return: a pointer to the nth node or NULL if it fail
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (i == index)
		{
			return (current);
		}
		i += 1;
		current = current->next;
	}
	return (NULL);

}
