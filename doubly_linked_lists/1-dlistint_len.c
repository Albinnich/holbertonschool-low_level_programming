#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - function that returns number of elements
 * @h: head node
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)

{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
