#include <stdio.h>
/**
* main - the main function is the start of the program.
* C program to add two numbers using function.
* Return: 0 for the successful execution.
* source: https://www.sanfoundry.com/c-program-add-two-numbers/
*/
int add(int a, int b)
{
return a + b;
}
int main(void)
{
int a, b;
printf("Enter two Numbers: ");
scanf("%d %d", &a, &b);
int sum = add(a, b);
printf("Addition of %d and %d is: %d\n ", a, b, sum);
return (0);
}
