#include "main.h"
/**
 * Write a function that searches a string for any of a set of bytes.
 * Prototype: char *_strpbrk(char *s, char *accept);
 * The _strpbrk() function locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * Returns a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int j = 0;

	while (*s)
	{
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
				return (s);
			j++;
		}
		j = 0;
		s++;
	}
	return ('\0');
}
