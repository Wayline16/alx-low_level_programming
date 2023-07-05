#include "main.h"
/**
 * Write a function that prints a string in reverse.
 * Prototype: void _print_rev_recursion(char *s);
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
