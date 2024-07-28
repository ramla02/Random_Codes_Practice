#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function and start of the program
 * C program where we are getting input from the user for the limit for
 * fibonacci triangle, and printing the fibonacci series
 * for the given number of times.
 * Return: 0 for the successful execution
 */

int main(void)
{
	int a = 0, b = 1, i, c, n, j;

	printf("Enter a number: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		a = 0;
		b = 1;
		printf("%d\t", b);
		for (j = 1; j < i; j++)
		{
			c = a + b;
			printf("%d\t", c);
			a = b;
			b = c;
		}
		printf("\n");
	}
	return (0);
}
