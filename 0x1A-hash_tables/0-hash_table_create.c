#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of table
 * Return: hash_table_t or NULL if fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *ht;

ht = malloc(sizeof(hash_table_t));
if (ht == NULL)
return (NULL);
ht->array = calloc(size, sizeof(hash_node_t));
if (!ht->array)
return (NULL);
ht->size = size;
return (ht);
}
