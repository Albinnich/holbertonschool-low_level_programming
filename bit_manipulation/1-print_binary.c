#include "main.h"

/**
 * print_binary - function that prints binary
 * @n: unsigned long integer
 * Return: always 0
 */

void print_binary(unsigned long int n)

{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
