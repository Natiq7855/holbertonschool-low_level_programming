#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t list
 * @head: pointer to the first node of the list
 *
 * Return: sum of all n values, or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
unsigned int sum = 0;
if (head == NULL)
{
return(0);
}
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
