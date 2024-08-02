#include <stdio.h>

/**
 * main - the main function and the start of the program
 * A C Program to print the rhombus pattern of Star
 * Return: 0 the successful excution
 */

int main(void)
{
	int i, j, rows, k;

	printf("Enter the number of rows: \n");
	scanf("%d", &rows);

	int space = rows - 1, num = 1;

	printf("\n");

	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= space; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= num; k++)
		{
			printf(" *");
		}
		if (space > i)
		{
			space = space - 1;
			num = num + 2;
		}
		if (space < i)
		{
			space = space + 1;
			num = num - 2;
		}
		printf("\n");
	}

	return (0);
}
