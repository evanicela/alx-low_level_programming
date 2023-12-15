#include<stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all single-digit numbers of base 10 starting from 0,
 * followed by a new line.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int digit;
/* Loop to iterate through single-digit numbers */
for (digit = 0; digit <= 9; digit++)
{
printf("%d", digit);
}
printf("\n"); /* Print a new line */
return (0);
}
