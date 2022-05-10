#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers ordered               
 * @min: The first value of the array
 * @max: The last value of the array
 *
 * Return: If min > max or the function fails - NULL
 */
int *array_range(int min, int max)
{
	int *a, i, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	a = malloc(sizeof(int) * s);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < s; i++)
		a[i] = min++;

	return (a);
}
