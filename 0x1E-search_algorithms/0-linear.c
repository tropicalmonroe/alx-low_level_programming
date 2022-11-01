#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array of integers
 * @array: pointe to first element of the array
 * @size: no of elements in array
 * @value: searched value
 * Return: index where valur is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x = 0;

	if (array == NULL)
		return (-1);

	for (x = 0; x < size && array[x] != value; x++)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		if (i + 1 == size)

			return (-1);
	}
	printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	return (x);
}
