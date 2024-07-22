#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/**
 * performOperation - a function that performs calculation
 * @a: the first value
 * @op: the operator
 * @b: the second value
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
 * main - is the main fuunction and the start of the program.
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0 for the successful execution.
 */

int main(int argc, char *argv[])
{
	float valueOne, valueTwo, answer;
	char operator;

	printf("Enter a calculation:\n\n");
	scanf("%f %c %f", &valueOne, &operator, &valueTwo);

	answer = performOperation(valueOne, operator, valueTwo);
	printf("%.9g %c %.9g = %.6g\n\n", valueOne, operator, valueTwo, answer);
	return (0);
}
