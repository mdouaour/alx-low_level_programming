#include "lists.h"
/**
 *get_nodeint_at_index - returns the nth node of a listint_t linked list
 *@head:a pointer to a list
 *@index:the index we are looking for
 *Return:a pointer to the nth node
 */
listint_t	*get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	tmp = head;
	while ((i < index) & (tmp != NULL))
	{
		i++;
		tmp = tmp->next;
	}
	if (tmp == NULL)
	{
		return (NULL);
	}
	return (tmp);
}
