#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_dnodeint - adds a node at the beginning of a dlistint_t list
 *@head: points to a pointer to the head of a  dlistint_t list
 *@n: an integer
 *Return: the address of the new element or NULL if it fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;
	return (*head);

}
