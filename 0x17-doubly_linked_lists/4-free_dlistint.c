#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *free_dlistint - frees a dlistint_t list
 *@head: points to the head of a dlistint_t
 *
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;


	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
