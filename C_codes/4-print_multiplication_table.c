#include <stdio.h>
/**
* main - the main function, the start of the program.
* C program that prints multiplication table using Recursion.
* source: https://www.sanfoundry.com/c-program-display-multiplication-table/
Return: 0 for the successful execution.
*/
int multiplicationTable(int num, int i)
{
if (i > 50)
{
return 0;
}
printf("%d x %d = %d\n", num, i, num * i);
multiplicationTable(num, i + 1);
}

int main(void)
{
int num;
puts("Enter a number : ");
scanf("%d", &num);
multiplicationTable(num, 1);
}
