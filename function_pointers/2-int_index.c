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

		if (size < 1 || array == NULL && cmp == NULL)
			return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		return (i);
	}
	return (-1);
}
