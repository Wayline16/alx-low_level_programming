#include "lists.h"
#include <stdlib.h>

/**
 * Write a function that frees a listint_t list.
 * Prototype: void free_listint2(listint_t **head);
 * The function sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_variable;

	if (head == NULL)
		return; /* do not do anything */
	while (*head != NULL)
	{
		temp_variable =  *head;
		*head = (*head)->next;
		free(temp_variable);
	}
}
