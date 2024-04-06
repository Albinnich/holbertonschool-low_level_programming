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

	if (b == NULL)
	{
		return (0);
	}
	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		value <<= 1;
		value += *b - '0';
	}
	return (value);
}
