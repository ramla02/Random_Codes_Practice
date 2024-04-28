#include <stdio.h>
/**
* main - the main function is the start of the program.
* C program to check whether a number is even or odd using "bitwise operator.
* Return: 0 for the successful execution.
* source: https://www.sanfoundry.com/c-program-integer-odd-or-even/
*/
void main()
{
int n;
printf("Enter a number: ");
scanf("%d", &n);
if (n & 1==1)
printf("%d is odd.\n", n);
else
printf("%d is even.\n", n);
}
