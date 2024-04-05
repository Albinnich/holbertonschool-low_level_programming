#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dlistint - function that frees list
 * @head: head node
 */

void free_dlistint(dlistint_t *head)

{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
