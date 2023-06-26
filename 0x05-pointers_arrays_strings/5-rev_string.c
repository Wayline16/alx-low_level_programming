#include "main.h"

/**
 * Write a function that reverses a string.
 */
void rev_string(char *s)
{
	char tmp;
	int i, length, length2;

	length = 0;
	length2 = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	length2 = length - 1;

	for (i = 0; i < length / 2; i++)
	{
		tmp = s[i];
		s[i] = s[length2];
		s[length2--] = tmp;
	}
}
