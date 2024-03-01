#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string to stdout
 * @str: character
 * return: 0
 */

void _puts(char *str)

{
while (*str)
_putchar(*str++);

_putchar('\n');
}
