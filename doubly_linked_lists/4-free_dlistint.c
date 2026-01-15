#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;
while(head != NULL)
{
temp = head->next;
free(head);
head = temp
}
}
