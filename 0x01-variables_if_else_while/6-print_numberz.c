#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{

	int num  = 0;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}

	printf("\n");
	return (0);
}
