#include "hash_tables.h"
#include <string.h>
/**
 *hash_table_print - prints a hash table
 *
 *@ht: the hash table o print
 *
 *
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *current;
	int printed = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (printed)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			printed = 1;
		}
		i++;
	}
	printf("}\n");
}
