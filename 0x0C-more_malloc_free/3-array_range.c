#include "main.h"
/**
 * Write a function that creates an array of integers.
 * Prototype: int *array_range(int min, int max);
 * The array created should contain all the values from min
 * (included) to max (included), ordered from min to max
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *block;
	int i, j = 0;

	if (min > max)
		return (NULL);
	block = malloc(sizeof(*block) * ((max - min) + 1));
	if (block != NULL)
	{
		for (i = min; i <= max; i++)
		{
			block[j] = i;
			j++;
		}
		return (block);
	}
	else
		return (NULL);
}
