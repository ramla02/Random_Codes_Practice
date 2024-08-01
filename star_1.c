#include <stdio.h>

/**
 * main - the main function and the start of the program
 * C Program to print the full Pyramid of Star in 180 degree
 * Return: 0 for the successful execution
 */

int main(void)
{
	int num, i, j;

	printf("Enter the number of columns: \n");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for (i = num; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return (0);
}
