#include<stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all single-digit numbers of base 10 starting from 0,
 * followed by a new line. Uses only the putchar function twice.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int digit;
/* Loop to iterate through single-digit numbers */
for (digit = 0; digit <= 9; digit++)
putchar(digit + '0'); /* Print each digit using ASCII representation */
putchar('\n'); /* Print a new line */
return (0);
}
