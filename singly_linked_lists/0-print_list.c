#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)

{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
	if (current -> str != NULL)
		printf("[%u] %s\n", current -> len, current -> str);
	else
		printf("[0] (nil)");
	current = current -> next;
	count++;
	}
	return (count);
}
