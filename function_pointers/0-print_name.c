#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - function print_name prints name
 * @name: argument name
 * @f: function pointer
 * return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
