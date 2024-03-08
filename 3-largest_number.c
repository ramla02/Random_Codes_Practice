#include <stdio.h>
/**
* main - the main function is the start of the program.
* C program to find the biggest of three numbers using fnction
* Return: 0 for the successful execution.
* source: https://www.sanfoundry.com/c-program-biggest-3-numbers/
*/
 int biggest(int a, int b)
{
if (a > b)
return (a);
return (b);
}

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
printf("%d is the biggest of all three numbers.\n", biggest(biggest(a, b), c));
return (0);
}
