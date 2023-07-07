#include "main.h"
/**
 * Write a function that copies a string.
 * Prototype: char *_strncpy(char *dest, char *src, int n)
 * Your function should work exactly like strncpy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
