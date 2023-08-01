#include "lists.h"
#include <stdio.h>

/**
 * Write a function that prints all the elements of a listint_t list.
 * Prototype: size_t print_listint(const listint_t *h);
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	/* while we have a pointer to head */
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
