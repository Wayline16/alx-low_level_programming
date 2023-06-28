#include "main.h"
/**
 * Write a function that changes all lowercase letters
 * of a string to uppercase.
 * Prototype: char *string_toupper(char *)
 */
char *string_toupper(char *word)
{
	int i;

	i = 0;
	while (word[i] != '\0')
	{
		if (word[i] >= 'a' && word[i] <= 'z')
			word[i] = word[i] - 32;
		i++;
	}
	return (word);
}
