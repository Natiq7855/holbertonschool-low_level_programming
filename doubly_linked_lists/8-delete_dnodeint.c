#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index idx
 * @head: pointer to the pointer of the first node
 * @index: index of the node to delete (0-based)
 *
 * Return: 1 if success, -1 if fail
 */


int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp;
unsigned int i = 0;
if (head == NULL || *head == NULL)
{
return (-1);
}
temp = *head;
if (index == 0)
{
*head = temp->next;
if (temp->next != NULL)
temp->next->prev = NULL;
free(temp);
return (1);
}
for (i = 0; temp != NULL && i < index; i++)
{
temp = temp->next;
}
if (temp == NULL)
{
return (-1);
}
if (temp->prev != NULL)
temp->prev->next = temp->next;
if (temp->next != NULL)
temp->next->prev = temp->prev;
free(temp);
return (1);
}
