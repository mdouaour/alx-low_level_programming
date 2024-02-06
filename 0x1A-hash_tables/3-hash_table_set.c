#include "hash_tables.h"
#include <string.h>
/**
 *hash_table_set - adds an element to the hash table
 *
 *@ht: the hash table we want to add or update the key/value
 *@key: the key of the element
 *@value: the value associated with the key
 *Return: 1 if it succed ,0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;
	hash_node_t *current;

	if (ht == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		return (0);
	}
	new->key = malloc(strlen(key) + 1);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	strcpy(new->key, key);
	new->value = malloc(strlen(value) + 1);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (0);
	}
	new->next = NULL;
	current = ht->array[index];

	if (current == NULL)
	{
		ht->array[index] = new;
		return (1);
	}
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
