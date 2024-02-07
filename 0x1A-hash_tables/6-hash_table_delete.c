#include "hash_tables.h"
/**
 *hash_table_delete - deletes a hash table
 *
 *@ht: pointer to a hash table
 *
 *
 *
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *swp;
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	if (ht->array == NULL)
	{
		free(ht);
		return;
	}
	while (i < ht->size)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			swp = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = swp;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
