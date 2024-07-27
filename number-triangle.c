#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function and the start of the program
 * Number triangle in C program
 * Return: 0 for the successful execution
 */

int main(void)
{
	int i, j, k, l, n;

	printf("Enter the range: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= i; k++)
		{
			printf("%d", k);
		}
		for (l = i - 1; l >= 1; l--)
		{
			printf("%d", l);
		}
		printf("\n");
	}
	return (0);
}
