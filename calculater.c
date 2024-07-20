#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - is the main function and the start of the program.
 * C caculate program.
 */

int main(int argc, char *argv[])
{
	float valueOne;
	float valueTwo;
	char operator;
	float ans;

	printf("Enter two values with an operator of your choice\n\n");
	scanf("%f %c %f", &valueOne, &operator, &valueTwo);

	switch (operator)
	{
	case '/':
		ans = valueOne / valueTwo;
		break;
	case '*':
		ans = valueOne * valueTwo;
		break;
	case '+':
		ans = valueOne + valueTwo;
		break;
	case '-':
		ans = valueOne - valueTwo;
		break;
	case '^':
		ans = pow(valueOne, valueTwo);
		break;
	case ' ':
		ans = sqrt(valueTwo);
		break;
	default:
		printf("Fail.\n");
		return (1);
	}
	printf("%.9g %c %.9g = %.6g\n\n", valueOne, operator, valueTwo, ans);
	return (0);
}
