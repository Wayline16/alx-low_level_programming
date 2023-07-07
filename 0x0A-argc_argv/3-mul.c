#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * Write a program that multiplies two numbers.
 * Your program should print the result of the multiplication,
 * followed by a new line
 * You can assume that the two numbers and result of the multiplication can be stored in an integer
 * Return: 1 if not enough arguments passed in, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;

		for (i = 1; i < 3; i++)
			j *= atoi(argv[i]);

		printf("%d\n", j);
	}

	return (0);
}
