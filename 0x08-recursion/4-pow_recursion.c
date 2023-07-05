#include "main.h"
/**
 * Write a function that returns the value of x raised to the power of y
 * Prototype: int _pow_recursion(int x, int y);
 * If y is lower than 0, the function should return -1
 */
int _pow_recursion(int x, int y)
{
	int ans = 0;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y > 0)
		y--;
	return (_pow_recursion(x,y) * x);
}
