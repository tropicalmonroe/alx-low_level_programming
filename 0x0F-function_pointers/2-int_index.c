#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of elemnts
 * @size: size of the array
 * @cmp: ponter func to compare values
 * Return: index first element cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int s;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (s = 0; s < size; s++)
	{
		if (cmp(array[s]) != 0)
			return (s);
	}

	return (-1);
}
