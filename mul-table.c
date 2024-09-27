#include <stdio.h>

/**
 * main - the main function and the start of the program
 * C program to generate multiplication table
 * of a given number
 * Return: 0 for the successful execution
 */
 
 int main(void)
 {
     int num, i;
     
     printf("Enter a number to multiply\n");
     scanf("%d", &num);
     printf("The multiplication table of %d is\n", num);
     
     for (i = 0; i <= 20; i++)
     {
         printf("%d x %d = %d\n", num, i, i * num);
     }
     return (0);
 }
