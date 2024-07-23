#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/**
 * performOperation - a function that performance calculation
 * @a: first value
 * @op: an operator
 * @b: second value
 */

float performOperation(float a, char op, float b)
{
	switch (op)
	{
	case '/':
		return (a / b);
	case '*':
		return (a * b);
	case '+':
		return (a + b);
	case '-':
		return (a - b);
	case '^':
		return (pow(a, b));
	case ' ':
		return (sqrt(b));
	default:
		printf("Fail.\n");
		exit(1);
	}
}

/**
 * main - the main function and the start of the program
 * A c calculater program using command line.
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0 for the successful execution
 */

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Usage: %s <valueOne> <operator> <valueTwo>\n", argv[0]);
		return (1);
	}

	float valueOne = atof(argv[1]);
	char operator = argv[2][0];
	float valueTwo = atof(argv[3]);
	float answer = performOperation(valueOne, operator, valueTwo);

	printf("%.9g %c %.9g = %.6g\n\n", valueOne, operator, valueTwo, answer);
	return (0);
}
