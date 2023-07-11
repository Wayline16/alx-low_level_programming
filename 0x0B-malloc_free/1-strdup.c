#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * function that returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * Prototype: char *_strdup(char *str);
 * The _strdup() function returns a pointer to a new string which is a
 * duplicate of the string str. Memory for the new string is obtained with
 * malloc, and can be freed with free.
 * Returns NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *ptr;
	int size;
	int x;

	if (str == NULL)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	ptr = malloc(size * sizeof(char));

	x = 0;
	while (x < size)
	{
		if (ptr == NULL)
		{
			return (NULL);
	}
		ptr[x] = str[x];
		x++;
	}
	return (ptr);
}
/**
 * _strlen - return length of a string
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{

	}
	return (a);
}
