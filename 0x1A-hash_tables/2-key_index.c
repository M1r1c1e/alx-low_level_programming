#include "hash_tables.h"

/**
 * key_index - the program function that gives you the index of a key.
 * @key: the index key
 * @size: the program hash table array size
 *
 * Return: the key's index
 * Description: it uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
