#include "main.h"
/*
 *  prints a square,
 *  followed by a new line.
 *  Prototype: void print_square(int size);
 *  use _putchar function to print
 *  size is the size of the square
 *  size is 0 or less, 
 *  the function should print only a new line
 *  character # to print the square
 */
void print_square(int size)
{
	int i;
	int k;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (k = 0; k < (size); k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
