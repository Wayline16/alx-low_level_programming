#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 * return: 0
 */
int main(void)
{
	char c = 'a';
	

	while (c <= 'z')
	{
		putchar(c);
		c++;

	}
	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}

