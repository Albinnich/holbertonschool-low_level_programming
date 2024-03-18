#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - function print_name prints name
 * @name: pointer
 * @f: function pointer
 * return: nothing
 */

void print_name(char *name, void (*f)(char *))

int main(void)
{
	void (*f)(char *) = &print_name;

	(*f)(name) = &print_name;

	return (0);
}
