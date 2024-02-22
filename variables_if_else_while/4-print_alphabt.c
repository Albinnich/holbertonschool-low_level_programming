#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the alphabet in lowercase
 * Return: Always 0 (Success)
 */

int main(void)

{
	char low, q, e;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
	if (low !=e && low !=q)
	putchar(low);
	}
	putchar('\n');
	return (0);
}


