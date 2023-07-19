#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: the array
 * @cmp: pointer to the function to be used for comparison
 * @size: number of elements in the array
 * Return:if no element matches or size <= 0 - -1
 * otherwise - index of the first element for cmp doesn't return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
