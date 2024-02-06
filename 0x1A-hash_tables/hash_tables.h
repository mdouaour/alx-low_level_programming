#ifndef HASH_TABLES
#define HASH_TABLES
#include <stdlib.h>
#include <stdio.h>
/**
 *struct hash_node_s - node of a hash table
 *
 *@key: the key, string
 *the key is unique in the hash table
 *@value: the value coresponding to the key
 *@next: A pointer to the next node of the list
 *
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 *struct hash_table_s - hash table data structure
 *
 *@size: the size of the array
 *@array: An array of size @size
 *Each cell of this aray is array is a pointer to the first node of a linkedlis
 *because we want our HashTable to use chaning collision handeling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;
hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
#endif
