#include "main.h"
int _root_sqrt(int raiz, int cont);
/**
 * Write a function that returns the natural square root of a number.
 * Prototype: int _sqrt_recursion(int n)
 * If n does not have a natural square root, the function should return -1
 */
int _sqrt_recursion(int n)

	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_root_sqrt(n, 1));
	}
}
/**
 * _root_sqrt - calculate the square root
 *@raiz: value to calc the square root
 *@cont: variable to cont
 *
 * Return: the number with the solution
 */
int _root_sqrt(int raiz, int cont)
{
	if (cont * cont == raiz)
	{
		return (cont);
	}
	else if (cont * cont > raiz)
	{
	return (-1);
	}
	else
	{
		return (_root_sqrt(raiz, cont + 1));
	}
}
