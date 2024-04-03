#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node - function to add new node at beginning of list
 * @head: double pointer
 * @str: duplicated string
 * Return: address of new element or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)

{
	list_t *new_node;
	int len = 0;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
		new_node->str = strdup(str);
		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}
		for (len = 0; str[len] != '\0'; len++)

		new_node->len = len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
