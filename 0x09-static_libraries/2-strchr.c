#include "main.h"
#include <stdio.h>
/**
 * Write a function that locates a character in a string.
 * Prototype: char *_strchr(char *s, char c);
 * Returns a pointer to the first occurrence of the 
 * character c in the string s, or NULL if the character is not found
 */
int main(void)
{
    char *s = "hello";
    char *f;

    	f = _strchr(s, 'l');
	if (f != NULL)
    	{
        	printf("%s\n", f);
    	}
    	return (0);
}
