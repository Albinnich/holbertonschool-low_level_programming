#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"


/**
 * get_op_func - performs operation asked by user
 * @s: operator passed as argument
 * Return: pointer and NULL if argument doesn't match
 */

int (*get_op_func(char *s))(int, int)

{
	get_op_func[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};


{
	if (s != "+" || s != "-" || s != "*" || s != "/" || s != "%")
	
	return (NULL);
}
