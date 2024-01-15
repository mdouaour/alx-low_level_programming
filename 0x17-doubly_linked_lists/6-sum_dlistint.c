#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *sum_dlistint - returns the sum of all the data (n) of a dlistint_t list
 *@head: points to the head of a dlistint_t list
 *Return: the sum or 0 if the list is empty
 *
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
