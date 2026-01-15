#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: pointer to the first node of the list
 * @index: index of the node, starting at 0
 *
 * Return: pointer to the node at the given index, or NULL if it does not exist
 */


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
while (head != NULL)
{
if (i == index)
{
return (head);
}
i++;
head = head->next;
}
return (NULL);

}
