#include "main.h"

/**
 * print_line - writes a straight line in the terminal
 * @n: parameter
 * Return: returns nothing
 */

void print_line(int n)

{
	while (n-- > 0)
	{
		_putchar('_');
	}
	putchar('\n');
}
