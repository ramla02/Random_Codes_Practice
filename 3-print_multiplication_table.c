#include <stdio.h>
/**
* main - the start of the main function program.
* C program that prints multiplication using Function.
* source: https://www.sanfoundry.com/c-program-display-multiplication-table/
* Return: 0 for the successful execution.
*/
void multiplicationTable(int num)
{
printf("Multiplication Table for %d:\n", num);
for (int i = 1; i <= 100; i++)
{
/* print the table using a suitable format*/
printf("%d x %d = %d\n", num, i, num * i);
}
}
int main(void)
{
int num;
/* ask the user for a number and store it in a variable */
puts("Enter a number : ");
scanf("%d", &num);
multiplicationTable(num);
}
