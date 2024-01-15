#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *dlistint_len - returns the number of elements in a linked dlistint_t list
 *@h:points to a dlinkedlist_t list
 *Return: the number of elements
 *
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int n = 0;
	const dlistint_t *current;

	current = h;
	while (current != NULL)
	{
		n += 1;
		current = current->next;
	}
	return (n);


}
