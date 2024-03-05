#include "main.h"

/**
 * _strspn - Function to return number of bytes in the
 * initial segment of s which consist only of bytes
 * from accept
 * @s: string with initial segment
 * @accept: where bytes are located
 * Return: number of bytes of s which consists of bytes
 * from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				bytes++;
				break;
			}
			else if ((accept[i + 1]) == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
