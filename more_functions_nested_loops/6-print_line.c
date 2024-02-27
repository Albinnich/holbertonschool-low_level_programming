#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line in the terminal
 * @n - is parameter
 * Return: returns nothing
 */

void print_line(int n)

{
	for (n <= '0')
	{
		_putchar('_');
	}
	putchar('\n');
}
