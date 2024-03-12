#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function to create an array of chars
 * @c: parameter
 * @size: another parameter
 *
 * Return: a pointer to array or NULL if fails
 */

char *create_array(unsigned int size, char c)

{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);
	a = (char *)malloc(size * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
