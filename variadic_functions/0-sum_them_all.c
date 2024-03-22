#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function returns sum of all parameters
 * @n: integer
 * Return: 0 if n=0
 */

int sum_them_all(const unsigned int n, ...)

{
	va_list args;
	int sum;
	unsigned int i;

	va_start(args, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
	sum = sum + va_arg(args, const unsigned int);
	}
	va_end(args);
	{
	return (sum);
}
	if (n == 0)
	{
		return (0);
	}
}
