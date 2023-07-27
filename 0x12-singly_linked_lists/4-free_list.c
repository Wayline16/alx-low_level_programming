#include "lists.h"
/**
 * Write a function that frees a list_t list.
 * Prototype: void free_list(list_t *head);
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
