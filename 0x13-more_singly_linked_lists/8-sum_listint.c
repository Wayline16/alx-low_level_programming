#include "lists.h"
#include <stdlib.h>

/**
 * Write a function that returns the sum of all the data (n) of a listint_t linked list.
 * Prototype: int sum_listint(listint_t *head);
 * if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
