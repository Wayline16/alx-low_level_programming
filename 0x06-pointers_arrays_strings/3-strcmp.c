#include "main.h"
/**
 * Write a function that compares two strings.
 * Prototype: int _strcmp(char *s1, char *s2)
 * Your function should work exactly like strcmp
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	i++;
	}
	return (0);
}
