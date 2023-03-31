#include "function_pointers.h"
/**
* int_index - return index place if comparison = true, else -1
* @array: array
* @size: size of elements in array
* @cmp: pointer to func of one of the 3 in main
* Return: 0 (success)
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int y = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (y < size)
			{
				if (cmp(array[y]))
					return (y);

				y++;
			}
		}
	}

	return (-1);
}
