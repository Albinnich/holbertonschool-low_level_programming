#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - functtion *malloc_checked to allocate
 * memory with malloc
 * @b: parameter
 * return: 0
 */

void *malloc_checked(unsigned int b)

{
void *ptr = malloc(b);
if (ptr == NULL)
{
	exit(98);
}
return (ptr);
}
