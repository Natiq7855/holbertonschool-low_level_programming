#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the first node
 */


size_t list_len(const list_t *h)
{
while (h != NULL)
{
size_t count = 0;
count++;
h = h->next;
}
printf("-> %u elements", h->str);
    
}