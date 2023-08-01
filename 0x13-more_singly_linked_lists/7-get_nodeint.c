#include "lists.h"
#include <stdlib.h>

/**
 * Write a function that returns the nth node of a listint_t linked list.
 * Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
 * where index is the index of the node, starting at 0
 * if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i  = 0;

    /* if there is no list return NULL */
	if (head == NULL)
		return (NULL);

	while (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}
	return (head);
}
