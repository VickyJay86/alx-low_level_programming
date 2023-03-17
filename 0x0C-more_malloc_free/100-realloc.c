#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: Size of the allocated space for ptr
 * @new_size: Size of the new memory block
 * Return: pointer to new memory block, or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *po;
	unsigned int x, y = new_size;
	char *old_po = ptr;

	if (ptr == NULL)
	{
		po = malloc(new_size);
		return (po);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	po = malloc(new_size);
	if (po == NULL)
		return (NULL);
	if (new_size > old_size)
		y = old_size;
	for (x = 0; x < y; x++)
		po[x] = old_po[x];
	free(ptr);
	return (po);
}
