#include <stdio.h>
#include "main.h"

/**
 * Write a program that prints the number of arguments passed into it.
 * Your program should print a number, followed by a new line
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++)
			;

		printf("%d\n", i - 1);
	}

	return (0);
}
