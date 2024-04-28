#include <stdio.h>
/**
* main - the main function is the start of the program.
* The program takes 3 numbers and finds the largest number,
* Amongs the three numbers, using "if statement".
* Return: 0 for the successful execution.
* source: https://www.sanfoundry.com/c-program-biggest-3-numbers/
*/
int main(void)
{
int a, b, c;
printf("Enter three numbers:\n");
printf("a: ");
scanf("%d", &a);
printf("b: ");
scanf("%d", &b);
printf("c: ");
scanf("%d", &c);
if (a > b && a > c)
printf("Biggest number is %d\n", a);
if (b > a && b > c)
printf("Biggest number is %d\n", b);
if (c > a && c > b)
printf("Biggest number is %d\n", b);
return (0);
}
