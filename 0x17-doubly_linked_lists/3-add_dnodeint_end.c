#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_dnodeint_end - adds a node at the end of a dlistint_t list
 *@head: points to a pointer to a dlistint_t list
 *@n: an integer
 *Return: the address of the new element , or NULL if it fail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	current = *head;
	if (*head == NULL)
	{
		new->prev = *head;
		*head = new;
		return (*head);
	}
	if (*head != NULL)
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		new->prev = current;
		current->next = new;
	}
	return (new);
}
