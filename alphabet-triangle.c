#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function and the start of the program
 * triangle alphabet in C program
 * Return: 0 for the successful execution
 */

int main(void)
{
	int ch = 65;
	int i, j, k, m;

	for (i = 1; i <= 26; i++)
	{
		for (j = 26; j >= i; j--)
			printf(" ");
		for (k = 1; k <= i; k++)
			printf("%c", ch++);
		ch--;
		for (m = 1; m < i; m++)
			printf("%c", --ch);
		printf("\n");
		ch = 65;
	}

	return (0);
}
