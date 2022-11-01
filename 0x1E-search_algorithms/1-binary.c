#include "search_algos.h"

/**
 * printArray - print array
 * @array: pointer to the first element
 * @start: index to start
 * @end: index to end
 * Return: Nothingg
 */

void printArray(int *array, size_t start, size_t end)
{
	size_t j = 0;

	printf("Searching in array: ");
	for (j = start; j <= end; j++)
	{
		printf("%d", array[j]);
		if (j != end)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
}
/**
 * binary_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in an array
 * @value: value to search for
 * Return: location of firat index
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1, mid = 0;

	if (!array)
		return (-1);

	while (start < end)
	{
	        printArray(array, start, end);
		mid = (start + end) / 2;
		if (value == array[mid])
		{
			return (mid);
		}
		else if (value < array[mid])
			end = mid - 1;
		else if (value > array[mid])
		        start = mid + 1;
	}
        printArray(array, start, end);
        if (value == array[end])
	        return (end);
        return (-1);
}	
