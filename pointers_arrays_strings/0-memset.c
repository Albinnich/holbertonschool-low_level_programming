/*
 * file: 0-memset.c
 * Auth: Albina Ismayilova
 */

#include "main.h"

/**
 * _memset() function fills memory with a constant byte
 * @n: first number of bytes
 * @b: constant byte
 * @s: pointer
 * returns: to s
 */

int main(void)

	char *_memset(char *s, char b, unsigned int n)
{
		while (n)
		{
			s[n - 1] = b;
			n--;
	}
	return (s);
}
