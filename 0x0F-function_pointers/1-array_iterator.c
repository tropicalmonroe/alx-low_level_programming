#include "function_pointers.h"
/**
 * array_iterator - excecutes a function given
 * @array: elements stored
 * @size: size of array
 * @action: action to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array ==NULL || action = NULL)
		return;

	while (size --> 0)
	{
		action(*array);
		array++;
	}
}
