#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: Input number of element
 * @size: size of memory
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int y;
	char *ptr;
	void *done;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	for (y = 0; y < (size * nmemb); y++)
		ptr[y] = 0;
	done = ptr;
	return (done);
}
