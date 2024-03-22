#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - function
 * @argc: argument count
 * @argv: argument vector
 * @atoi: to convert arguments
 * Return: 0 on success otherwise 98, 99 or 100
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;
	int (*func)(int, int);

	if (argc != 0)
	{
		printf("Error\n");
	return(98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
func = get_op_func(argv[2]);

if (!func || argv[2][1] != '\0')
{
	printf("Error\n");
	return(99);
}
if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
{
	printf("Error\n");
	return{100);
	}
result = func(num1, num2);
printf("%d\n", result);

return(0);
}
