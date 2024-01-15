#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *print_dlistint - prints all the elements of a dlistint_t list
 *@h: points to list
 *Return: the number of nodes in the list
 *
 *
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int n = 0;
	const dlistint_t *current;

	current = h;
	while (current != NULL)
	{
		n += 1;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (n);

}
