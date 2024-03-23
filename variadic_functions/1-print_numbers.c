#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 * @separator: string between numbers
 * @n: number of integers
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", i);
		if (separator != NULL && i < n - 1)
	{
		printf("%s", separator);
	}
}
	va_end(args);

	printf("\n");
}
