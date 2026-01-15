#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int i = 0;

if (head == NULL || str == NULL)
{
return (NULL);
}
new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}
new->str = strdup(str);
while (new->str != NULL)
{
free(new);
return (NULL);
}

while (str[len])
len++;

new->len = len;
new->next = *head;
*head = new;

return (new);
}