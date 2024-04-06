#include "main.h"

/**
 * get_bit - function that returns value of bit at index
 * @n: unsigned long integer
 * @index: unsigned integer
 * Return: value of bit or -1 if failed
 */

int get_bit(unsigned long int n, unsigned int index)

{
	unsigned long int shifted;
	int bit_value;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	shifted = n >> index;

	bit_value = shifted & 1;

	return (bit_value);
}
