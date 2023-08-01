#include "lists.h"
#include <stdlib.h>

/**
 * Write a function that frees a listint_t list.
 * Prototype: void free_listint(listint_t *head);
 */
void free_listint(listint_t *head)
{
	/* go to the end of the list then start freeing from there */

	/* we have reached the end of the list */
	if (head == NULL)
		return;
	/* free everything else */
	free_listint(head->next);
	/* then free head */
	free(head);
}
