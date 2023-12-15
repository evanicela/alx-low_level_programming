#include<stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible combinations of single-digit numbers,
 * separated by ",", in ascending order. Uses only the putchar function
 * four times.
 *
 * Return: (0) - Always 0 (success)
 */
int main(void)
{
int digit1, digit2;
for (digit1 = 0; digit1 <= 9; digit1++)
{
for (digit2 = digit1 + 1; digit2 <= 9; digit2++)
{
putchar(digit1 + '0');
putchar(digit2 + '0');
/* Check if it's the last combination, don't print "," */
if (digit1 != 8 || digit2 != 9)
{
putchar(',');
putchar(' ')
}}
}
putchar('\n');
return (0);
}
