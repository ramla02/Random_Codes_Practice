#include <stdio.h>
/**
* main - is the main function, the start of the program.
* The program takes the given integer and
* checks whether the integer is positive or negative.
* Return: 0 for the successful execution.
* source: https://www.sanfoundry.com/c-program-integer-positive-or-negative/
*/
void main(void)
{
int number;
printf("Enter a number \n");
scanf("%d", &number);
if (number >= 0)
printf("%d is a positive number \n", number);
else
printf("%d is a negative number \n", number);
}
