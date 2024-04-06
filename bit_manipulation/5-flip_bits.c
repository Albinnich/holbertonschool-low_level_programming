#include "main.h"

/**
 * flip_bits - function to return number of bits
 * to flip to get from one number to another
 * @n: unsigned long integer
 * @m: another unsigned long integer
 * Return: always 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned int count = 0;
	unsigned long int xor_result = n ^ m;

	while (xor_result != 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
