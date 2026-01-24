#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to the hash table.
 *
 * Return: void.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *next_node;
	unsigned long int i;

	if (ht == NULL)
		return;

	/* 1. Loop through each bucket in the array */
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		/* 2. Traverse the linked list at this bucket */
		while (node != NULL)
		{
			/* Store the next pointer before freeing current node */
			next_node = node->next;

			/* 3. Free the duplicated strings */
			free(node->key);
			free(node->value);

			/* 4. Free the node structure itself */
			free(node);

			/* Move to the next saved node */
			node = next_node;
		}
	}

	/* 5. Free the array of pointers */
	free(ht->array);

	/* 6. Free the main table structure */
	free(ht);
}