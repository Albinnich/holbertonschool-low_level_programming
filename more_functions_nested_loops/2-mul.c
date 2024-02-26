#include "main.h"

/**
 * Function that multiplies two integers
 */

int mul(int a, int b)

int main()

{
	int num1, num2;

	printf("Enter the first number: ");
	scanf("%d", &num1);

	printf("Enter the second number: ");
	scanf("%d", &num2);

	int result = mul(num1, num2);
	printf("The product is: %d\n", result);

	return 0;
}

int mul(int a, int b)

{
	return a*b;
}
