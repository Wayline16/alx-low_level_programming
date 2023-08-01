#include "lists.h"
#include <stdlib.h>

/**
 * Write a function that deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * Prototype: int pop_listint(listint_t **head);
 * f the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_variable; /* keep track of current head */
	int data = 0;

    /* if there is no list */
	if (head == NULL || *head == NULL)
		return (0);
	temp_variable = *head; /* stores the pointer to temp_variable head */
    /* access the field n of temp_var and assign it to data */
	data = temp_variable->n;
    /* make the value at head be the value of head at next */
	*head = (*head)->next;
    /* free the temp var */
	free(temp_variable);
	return (data);
}
