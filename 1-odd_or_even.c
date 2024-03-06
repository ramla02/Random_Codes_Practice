#include <stdio.h>
/**
* main - the main function is the start of the program.
* C program to check whether a number is "even or odd".
* Using ternary operator.
* Return: 0 for the successful execution.
* source: https://www.sanfoundry.com/c-program-integer-odd-or-even/
*/
void main()
{
int n;
printf("Enter an integer: ");
scanf("%d", &n);
(n % 2 == 0) ?
printf("%d is even number.\n", n) :
printf("%d is odd number.\n", n);
}
