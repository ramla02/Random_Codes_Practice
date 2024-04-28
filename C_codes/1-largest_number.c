#include <stdio.h>
/**
* main - the main function is the start of the program.
* C program that takes 3 numbers and finds the largest number
* Amongs the three numbers, using "if-else statement"
* Return: 0 for the successful execution.
* source: https://www.sanfoundry.com/c-program-biggest-3-numbers/
**/
void main(void)
{
int num1, num2, num3;
printf("Enter the values of num1, num2 and num3\n");
scanf("%d %d %d", &num1, &num2, &num3);
printf("num1 = %d\tnum2 = %d\tnum3 = %d\n", num1, num2, num3);
if (num1 > num2)
{
if (num1 > num3)
{
printf("%d is the largest.\n", num1);
}
else
{
printf("%d is the largest number.\n", num3);
}
}
else if (num2 > num3)
printf("%d is the largest number.\n", num2);
else
printf("%d is the largest number.\n", num3);
}
