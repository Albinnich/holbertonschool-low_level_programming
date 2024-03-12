#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - function to create an array of chars
 * @NULL: if size = 0
 * @c: parameter
 * @size: another parameter
 * returns: NULL
 */

char *create_array(unsigned int size, char c)

{
	char c;
	unsigned int size;

	*create_array = (char*)malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);
}
