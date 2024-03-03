#include <stdio.h>
/**
* main - the start of the main program.
* program to print multiplication table using while loop.
* Return: 0 for the successful execution.
* source: https://www.sanfoundry.com/c-program-display-multiplication-table/
*/
int main(void)
{
int number, i = 1;
printf("Enter the Number:");
scanf("%d", &number);
printf("Multiplication table of %d:\n ", number);
printf("-------------------------\n");
while (i <= 24)
{
printf(" %d x %d = %d \n ", number, i, number * i);
i++;
}
return (0);
} 
