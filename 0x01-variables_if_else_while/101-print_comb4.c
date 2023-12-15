#include<stdio.h>
/**
* main - Entry point of the program
*
* Description: Prints all possible different combinations of three digits,
* separated by ",". The three digits must be different, and permutations
* are considered the same combination. Prints only the smallest combination.
* Uses only the putchar function six times.
*
* Return: (0) - Always 0 (success)
*/
int main(void)
{
for (int digit1 = 0; digit1 <= 7; digit1++)
{
for (int digit2 = digit1 + 1; digit2 <= 8; digit2++)
{
for (int digit3 = digit2 + 1; digit3 <= 9; digit3++)
{
putchar(digit1 + '0');
putchar(digit2 + '0');
putchar(digit3 + '0');
/* Check if it's not the last combination, then print "," */
if (!(digit1 == 7 && digit2 == 8 && digit3 == 9))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
