#include "function_pointers.h"

/**
 * int_index - function int_index searches for an integer
 * @size: number of elements in array
 * @array: array
 * @cmp: pointer to the function
 * Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int i;

	for (i = 0; i < size; i++)
		cmp(array[i]);
}
