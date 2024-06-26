#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>

/**
 * add_node_end - function that adds new node at end
 * @head: head node
 * @str: string
 * Return: address of new element or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)

{
	list_t *new_node;
	list_t *current;
	int len;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (len = 0; str[len]; len++)
	;

	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
		current->next = new_node;
	}
		return (new_node);
	}
