#include "lists.h"
/**
 * Write a function that prints all the elements of a list_t list.
 * Prototype: size_t print_list(const list_t *h);
 * Return: the number of nodes
 * Format: see example
 * If str is NULL, print [0] (nil)
 * You are allowed to use printf
*/

size_t print_list(const list_t *h)
{
const list_t *cursor = h;
size_t count = 0;

while (cursor != NULL)
{
if (cursor->str != NULL)
printf("[%d] %s\n", cursor->len, cursor->str);
else
printf("[0] (nil)\n");
count += 1;
cursor = cursor->next;
}

return (count);
}
