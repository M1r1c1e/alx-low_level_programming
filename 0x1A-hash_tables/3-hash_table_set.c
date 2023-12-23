#include "hash_tables.h"

/**
 * hash_table_set - Adding or update elements in a hash table
 * @ht: A pointer pointing to the hash table.
 * @key: unempty added key
 * @value: The associated key value
 *
 * Return: return 0 if fail or Otherwise 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_dupe;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_dupe = strdup(value);
	if (value_dupe == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_dupe;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_dupe);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_dupe;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
