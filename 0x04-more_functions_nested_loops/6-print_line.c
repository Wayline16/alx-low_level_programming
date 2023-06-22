#include "main.h"
/*
 *  draws a straight line in the terminal.
 *  Prototype: void print_line(int n);
 *  use _putchar function to print
 *  n is the number of times 
 *  the character _ should be printed
 *  The line should end with a \n
 *  If n is 0 or less, 
 *  the function should only print \n
 */
void print_line(int n)
{
	if (!(n == 0 || n < 0))
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');

}
