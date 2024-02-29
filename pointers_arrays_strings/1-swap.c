#include "main.h"
#include <stdio.h>

/** swap_int(int *a, int *b) - swaps the values of two integers
 * Return: nothing
 */

void swap_int(int *a, int *b)

{
	int temp = *a;
	*a = *b;
	*b = temp;
}
