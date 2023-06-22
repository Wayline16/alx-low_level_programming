#include "main.h"
/*
 *  prints a triangle, followed by a new line.
 *  Prototype: void print_triangle(int size);
 *  use _putchar function to print
 *  size is the size of the triangle
 *  size is 0 or less,
 *  the function should print only a new line
 *  character # to print the triangle
 */
void print_triangle(int size)
{
	int i;
        int k;

	if (size <= 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (k = 1; k <= size; k++)
		{
			if (k <= (size - i))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}

}
