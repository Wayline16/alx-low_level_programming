#include "main.h"
/*
 * Write a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 * Prototype: void more_numbers(void);
 * use _putchar three times
 */
void more_numbers(void)
{
	int i;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (k = 0; k < 15; k++)
		{
			if (k >= 10)
			_putchar('1');
			_putchar(k % 10 + '0');
		}
		_putchar('\n');
	}
}
