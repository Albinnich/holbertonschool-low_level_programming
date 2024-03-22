#include "variadic_functions.h"

/**
 * sum_them_all - function returns sum of all parameters
 * @n: integer
 * Return: 0 if n=0
 */

int sum_them_all(const unsigned int n, ...)

{
	int sum = 0;
	int i;
	int x;

	va_list args;

	va_start(args, n);
	
	for (i = 0; i < n; i++)
	{
	x = va_arg(args, int);
	sum += x;
	}
	va_end(args);
	return (sum);
	}
	while (n == 0)
	{
	return (0);
}
