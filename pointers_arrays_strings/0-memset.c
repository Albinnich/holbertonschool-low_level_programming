#include "main.h"
#include <stdio.h>

/**
 * _memset() function fills memory with a constant byte
 * @n: first number of bytes
 * @b: constant byte
 * @s: pointer
 * returns: to s
 */

int main(void)
{
	char *_memset(char *s, char b, unsigned int n)
	unsigned int i;
	for (i = 0; i < n; i++) {
		s[i] = b;
	}
	return s;
}
