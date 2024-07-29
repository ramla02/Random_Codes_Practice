#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function and the start of the program
 * This is a number in character conversion in c language
 * Return: 0 for the successful execution
 */

int main(void)
{
	long int n, sum = 0, r;

	printf("Enter a number: ");
	scanf("%ld", &n);

	while (n > 0)
	{
		r = n % 10;
		sum = sum * 10 + r;
		n = n / 10;
	}
	n = sum;
	while (n > 0)
	{
		r = n % 10;
		switch (r)
		{
		case 1:
			printf("one\n");
			break;
		case 2:
			printf("two\n");
			break;
		case 3:
			printf("three\n");
			break;
		case 4:
			printf("four\n");
			break;
		case 5:
			printf("five\n");
			break;
		case 6:
			printf("six\n");
			break;
		case 7:
			printf("seven\n");
			break;
		case 8:
			printf("eight\n");
			break;
		case 9:
			printf("nine\n");
			break;
		case 10:
			printf("ten\n");
			break;
		default:
			printf("this is over my limit\n");
		}
		n = n / 10;
	}
	printf("\n");
	return (0);
}
