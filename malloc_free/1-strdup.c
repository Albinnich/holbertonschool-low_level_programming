#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - The function _strdup returns a pointer
 * to a duplicate of str string
 * @str: string
 * Return: returns NULL if str = NULL; returns
 * pointer to duplicated string on success
 */

char *_strdup(char *str)

{
	char *newstr;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
	len++;

	newstr = (char *)malloc((sizeof(char) * len) + 1);
	if (newstr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		newstr[i] = str[i];
	newstr[len] = '\0';

	return (newstr);
	}
