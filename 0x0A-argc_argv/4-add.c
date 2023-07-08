#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * Write a program that adds positive numbers.
 * Print the result, followed by a new line
 * If no number is passed to the program, print 0, followed by a new line
 * If one of the number contains symbols that are not digits, print Error,
 * followed by a new line, and return 1
 * You can assume that numbers and the addition of all the numbers can be stored in an int
 */
int main(int argc, char *argv[])
{
	int i, j, length, sum;
	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			length = strlen(ptr);

			for (j = 0; j < length; j++)
			{
				if (isdigit(*(ptr + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[i]);
		}

	printf("%d\n", sum);
	}
	return (0);
}
