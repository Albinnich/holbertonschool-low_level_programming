#include "main.h"

/**
 * _strchr - Function that locates character in a string
 * @s: string
 * @c: character
 * Return: returns pointer to first appear of c
 */

char *_strchr(char *s, char c)

{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	return (NULL);
}
