/*
 * File: 0-memset.c
 * Auth: Albina Ismayilova
 */

#include "main.h"

/**
 * _memset - The _memset() function fills
 * the first n bytes of memory area
 * pointed to by s with the constant byte b
 * @n: number of bytes
 * @b: constant byte
 * @s: target
 * Returns: returns new value of target
 */

	char *_memset(char *s, char b, unsigned int n)
{
		while (n)
		{
			s[n - 1] = b;
			n--;
	}
	return (s);
}
