#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * Write a function that creates an array of chars,
 * and initializes it with a specific char.
 * Prototype: char *create_array(unsigned int size, char c);
 * Returns NULL if size = 0
 * Returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc((size) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
