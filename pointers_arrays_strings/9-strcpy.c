#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies string to buffer
 * @dest: parameter 1
 * @src: parameter 2
 * return: pointer to dest
 */

char *_strcpy(char *dest, char *src)

	{
int inc = 0;
while (*(src + inc) != '\0')
{
*(dest + inc) = *(src + inc);
inc++;
}
*(dest + inc) = '\0';
return (dest);
}
