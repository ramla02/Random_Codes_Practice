#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/**
 * main - is the main function and the start of the program
 * C calculater program using if-else statement
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success otherwise 1
 */

int main(int argc, char *argv[])
{
	float valueOne;
	float valueTwo;
	char operator;
	float answer;

	printf("Enter calculation:\n\n");
	scanf("%f %c %f", &valueOne, &operator, &valueTwo);

	if (operator == '/')
	{
		answer = valueOne / valueTwo;
	}
	else if (operator == '*')
	{
		answer = valueOne * valueTwo;
	}
	else if (operator == '+')
	{
		answer = valueOne + valueTwo;
	}
	else if (operator == '-')
	{
		answer = valueOne - valueTwo;
	}
	else if (operator == '^')
	{
		answer = pow(valueOne, valueTwo);
	}
	else if (operator == ' ')
	{
		answer = sqrt(valueOne);
	}
	else
	{
		printf("Fail.\n");
		return (1);
	}

	printf("%.9g %c %.9g = %.6g\n\n", valueOne, operator, valueTwo, answer);
}
