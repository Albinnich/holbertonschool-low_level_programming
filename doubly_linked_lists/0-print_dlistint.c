#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - function that prints all elements
 * @h: head node
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)

{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
