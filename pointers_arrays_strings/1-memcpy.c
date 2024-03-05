#include "main.h"

/**
 * _memcpy - Function _memcpy() copies memory area
 * @n: bytes
 * @src: memory area first
 * @dest: memory area second
 * Return: Always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
