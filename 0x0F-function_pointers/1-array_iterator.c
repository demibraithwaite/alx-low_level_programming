#include <stdlib.h>

/**
 * array_iterator - a function that executes a fxn given as a
 * parameter on each element of an array.
 * @array: the array
 * @size: size of the array
 * @action: the fxn to perform on each elements
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!(array && action))
		return;

	for (i - 0; i < size; i++)
		action(array[i]);
}
