#include "function_pointers.h"

/**
 * array_iterator - Function array_iterator executes
 * a function given as a parameter
 * @array: array
 * @size: size of array
 * @action: pointer to function
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
