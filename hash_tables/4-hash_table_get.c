#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *node;
unsigned long int index;

if (ht == NULL || key == NULL || *key == '\0')
{
return (NULL);
}

index = key_index((const unsigned char *)key, ht->size);

node = ht->array[index];

while(node != NULL)
{
if (strdup(node->key, key) != 0)
{
return (node->value);
}
node = node->next;
}
return(NULL);
}
