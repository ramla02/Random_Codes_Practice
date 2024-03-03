#include <stdio.h>
/**
* main - the start of the main program.
* C program to print multiplication table using Do while loop.
* Return: 0 for the successful execution.
* source: https://www.sanfoundry.com/c-program-display-multiplication-table/
*/
int main(void)
{
int n, i = 1;
printf("Enter a number: ");
scanf("%d", &n);
do
{
printf("%d x %d = %d\n", n, i, n * i);
i++;
}
while (i <= 30);
return (0);
}
