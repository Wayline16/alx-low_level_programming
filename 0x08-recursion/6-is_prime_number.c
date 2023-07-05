#include "main.h"
int calculo_primo(int num_, int inf);
/**
 * Write a function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * Prototype: int is_prime_number(int n)
 */
int is_prime_number(int n)
{
	int a = 2;

	if (n == 1)
		return (0);
	if (n < 0)
		return (0);
	return (calculo_primo(n, a));
}
/**
 * calculo_primo - function that returns 1 if the input integer is a prime.
 *@num1 : first value
 *@num2 : second value
 *
 * Return: Return solution
 */
int calculo_primo(int num1, int num2)
{
	if (num1 / 2 < num2)
		return (1);
	if (num1 % num2 == 0)
		return (0);
	return (calculo_primo(num1, num2 + 1));
}
