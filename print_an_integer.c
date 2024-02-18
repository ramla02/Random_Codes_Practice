#include <stdio.h>
/*
* main - the main function is the start of the program.
* the program prints an integer entered by the user.
* Return: 0 for the successful execution.
*/
int main(void)
{
int num;
printf("Enter an integer:");
scanf("%d", &num);
printf("You entered: %d\n", num);
return (0);
}
