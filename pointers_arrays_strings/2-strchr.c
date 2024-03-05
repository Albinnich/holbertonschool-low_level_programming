#include "main.h"
#include <stddef.h>

/**
 * _strchr - Returns a pointer to the first appear
 * of the character c in the string s, or NULL if the
 * character is not found
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
