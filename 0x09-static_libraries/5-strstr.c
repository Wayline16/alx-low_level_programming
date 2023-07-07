#include "main.h"
/**
 * Write a function that locates a substring.
 * Prototype: char *_strstr(char *haystack, char *needle);
 * The _strstr() function finds the first occurrence of the substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 * Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int count = 0; 
	int a = 0;
	int k = 0;
	int j = 0;
	int l = 0;
	int i = 0;
	char *p;

	while (needle[count] != '\0')
	{
		count++;
	}
	while (haystack[i] != '\0')
	{
		i++;
			}
	if (count == 0)
		return (haystack);
	while (haystack[j] != '\0')
	{
		if (haystack[j] == needle[0])
		{
			p = &haystack[j];
			l = j;
			a = 0;
			for (k = 0; k < count; k++)
			{
				if (haystack[l] == needle[k])
					a++;
				l++;
			}
		}
		if (a == count)
			return (p);
		j++;
	}
	return ('\0');
}
