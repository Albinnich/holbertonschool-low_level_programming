#include "main.h"

/**
 * clear_bit - function that sets value of bit to 0
 * @n: unsigned long integer
 * @index: unsigned integer
 * Return: 1 if success, -1 if fail
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1 << index);
	{
		return (1);
	}
}
