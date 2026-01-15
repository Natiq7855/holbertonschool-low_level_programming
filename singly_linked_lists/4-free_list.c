#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to the first node
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;   /* store next node */
		free(head->str);     /* free the string inside the node */
		free(head);          /* free the node itself */
		head = temp;         /* move to next node */
	}
}
