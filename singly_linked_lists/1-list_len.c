#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns number of elements
 * @h: string
 * Return: number of elements
 */

size_t list_len(const list_t *h)

{
	size_t count = 0;

	const list_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
