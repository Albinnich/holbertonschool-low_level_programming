#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - function locates first appear in the string s
 * and returns pointer to the byte in s that
 * matches one of the bytes in accept, or NULL
 * if no such byte is found
 * @s: first string
 * @accept: second string
 * return: returns pointer to the byte s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}
	return ('\0')';
			}
