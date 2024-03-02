#include <stdio.h>
/**
* main - the maint entry of the program.
* C program to print multiplication table using for loop.
* Return: 0 for the successful execution.
* source: (https://www.sanfoundry.com/c-program-display-multiplication-table/)
*/
int main(void)
{
int n, i;
printf("Enter a number: ");
scanf("%d" , &n);
printf("multiplication table of %d: \n", n);
printf("---------------------------\n");
for (i = 1; i <= 10; i++)
printf("%d x %d = %d\n", n, i, n * i);
return (0);
}

