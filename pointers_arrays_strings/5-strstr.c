#include "main.h"

/**
 * _strstr - The _strstr() function finds the first appear
 * of substring needle in the string haystack. The
 * terminating null bytes (\0) are not compared
 * @haystack: string
 * @needle: substring
 * Return: Returns a pointer to the beginning of
 * located substring, or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
