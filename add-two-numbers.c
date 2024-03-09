#include <stdio.h>
/**
 * main - the main function is the start of the program.
 * C program to add two numbers using naive approach.
 * Return: 0 for the successful execution.
 * source: https://www.sanfoundry.com/c-program-add-two-numbers/
 */
int main(void)
{
int a, b;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
int sum = a + b;
	printf("Sum of %d and %d is: %d\n", a, b, sum);
	return (0);
}
