#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 *add_node - add a node in the begining of a lisnked list
 *@head: a pointer to a pointer to element of type list_t
 *@str:a pointer to char
 *Return: a pointer to the fist element of list_t
 */
list_t	*add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->len = strlen(str);
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (new);
}
