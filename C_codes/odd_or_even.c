#include <stdio.h>
/**
* main - the main function is the start of the program.
* C program to check whether a number is "Even or Odd" 
* Usinng if-else statement and modulus Operator.
* Return: 0 for the successful execution.
* source: https://www.sanfoundry.com/c-program-integer-odd-or-even/
*/
void main()
{
int n;
printf("Enter a number: ");
scanf("%d", &n);
if (n % 2 == 0)
printf("%d is even number.", n);
else
printf("%d is odd number.", n);
}
