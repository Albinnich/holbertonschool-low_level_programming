#include "main.h"

/**
*_memset - Entry point
*@s: target
*@b: constant byte
*@n: number of bytes
*Return: Always 0
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
