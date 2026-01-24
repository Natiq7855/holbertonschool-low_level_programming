#include <stdlib.h> /* This provides 'free' and 'NULL' */
#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table and frees all memory.
 * @ht: A pointer to the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *next_node;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			/* Save the next node BEFORE we free the current one */
			next_node = node->next;

			/* Free the members of the node (created with strdup) */
			free(node->key);
			free(node->value);

			/* Free the node structure itself */
			free(node);

			/* Move to the next node in the chain */
			node = next_node;
		}
	}

	/* Free the array of pointers and the table struct itself */
	free(ht->array);
	free(ht);
}