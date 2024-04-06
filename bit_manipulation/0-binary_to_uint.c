#include "main.h"

/**
 * binary_to_uint - function that converts binary number
 * to unsigned integer
 * @b: pointer to string
 * Return: converted number or 0 if b is NULL
 */

unsigned int binary_to_uint(const char *b)

{
	unsigned int value = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] == '0' || b[i] == '1')
	{
		value <<= 1;
		value += b[i] - '0';
		i++;
	}
	return (value);
}
