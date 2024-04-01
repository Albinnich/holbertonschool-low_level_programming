#include <stdio.h>
#include "lists.h"

/**
 * add_node - function to add new node at beginning of list
 * @head: double pointer
 * @str: duplicated string
 * Return: address of new element or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)

{

	const char *str = strdup(
