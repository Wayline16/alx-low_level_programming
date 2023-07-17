#include "main.h"
/**
 * Write a function that reallocates a memory block using malloc and free
 * Prototype: void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
 * where ptr is a pointer to the memory previously allocated with a call to malloc: malloc(old_size)
 * old_size is the size, in bytes, of the allocated space for ptr
 * and new_size is the new size, in bytes of the new memory block
 * The contents will be copied to the newly allocated space,
 * in the range from the start of ptr up to the minimum of the old and new sizes
 * If new_size > old_size, the “added” memory should not be initialized
 * If new_size == old_size do not do anything and return ptr
 * If ptr is NULL, then the call is equivalent to malloc(new_size), for all values of old_size and new_size
 * If new_size is equal to zero, and ptr is not NULL, then the call is equivalent to free(ptr). Return NULL
 * Don’t forget to free ptr when it makes sense
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *temp_block;
	unsigned int i;

	if (ptr == NULL)
	{
		temp_block = malloc(new_size);
		return (temp_block);
	}
	else if (new_size == old_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		temp_block = malloc(new_size);
		if (temp_block != NULL)
		{
			for (i = 0; i < min(old_size, new_size); i++)
				*((char *)temp_block + i) = *((char *) ptr + i);
			free(ptr);
			return (temp_block);
		}
		else
			return (NULL);
	}
}
