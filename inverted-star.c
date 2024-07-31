#include <stdio.h>

/**
 * main - the main function and the start of the program
 * C Program to print the inverted full Pyramid of Star
 * Return: 0 for the sucessful execution
 */

int main(void)
{
	int i, j, rows, k, m = 1;

	printf("Enter the number rows: \n");
	scanf("%d", &rows);
	printf("\n");

	for (i = rows; i >= 1; i--)
	{
		for (j = 1; j <= m; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= (2 * i - 1); k++)
		{
			printf("* ");
		}
		m++;
		printf("\n");
	}
	return (0);
}
