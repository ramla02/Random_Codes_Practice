#include <stdio.h>
/**
* main - the main function is the start of the program.
* C program to find the biggest of three numbers using ternary operator.
* Return: 0 for the successful execution.
* source: https://www.sanfoundry.com/c-program-biggest-3-numbers/
*/
int main(void)
{
int a, b, c;
printf("Enter three numbers: \n");
printf("a: ");
scanf("%d", &a);
printf("b: ");
scanf("%d", &b);
printf("c: ");
scanf("%d", &c);
printf("Largest of three numbers is %d\n", a > b ? (a > c ? a : c) : (b > c ? b : c));
return (0);
} 
