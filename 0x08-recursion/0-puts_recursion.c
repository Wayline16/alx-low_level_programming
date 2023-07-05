#include "main.h"
/**
 * Write a function that prints a string, followed by a new line.
 * Prototype: void _puts_recursion(char *s)
 */
void _puts_recursion(char *s)
{

	if (s[0] == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		s++;
		_puts_recursion(s);
	}
}
