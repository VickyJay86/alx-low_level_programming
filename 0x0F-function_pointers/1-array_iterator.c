#include <stddef.h>

/**
 * array_iterator - prints each array element
 * on a new line
 * @array: The array
 * @size: The size of the array.
 * @action: The function to apply on each element.
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int y;

	if (array == NULL || action == NULL)
		return;

	for (y = 0; y < size; y++)
	{
		action(array[y]);
	}
}
