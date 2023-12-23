#include "hash_tables.h"

/**
 * hash_table_create - this function creates a hash table.
 * @size: this is the size of the array.
 *
 * Return: a pointer to the new hash table or null if an error.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashT;
	unsigned long int i;

	hashT = malloc(sizeof(hash_table_t));
	if (hashT == NULL)
		return (NULL);

	hashT->size = size;
	hashT->array = malloc(sizeof(hash_node_t *) * size);
	if (hashT->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hashT->array[i] = NULL;

	return (hashT);
}
