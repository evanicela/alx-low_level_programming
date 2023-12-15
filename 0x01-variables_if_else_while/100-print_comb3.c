#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible different combinations of two digits,
 * separated by ", ". The two digits must be different, and 01 and 10 are
 * considered the same combination. Prints only the smallest combination.
 * Uses only the putchar function five times.
 *
 * Return: (0) - Always 0 (success)
 */
int main(void)
{
for (int digit1 = 0; digit1 <= 8; digit1++)
{
for (int digit2 = digit1 + 1; digit2 <= 9; digit2++)
{
putchar(digit1 + '0');
putchar(digit2 + '0');
 /* Check if it's not the last combination, then print ", " */
if (!(digit1 == 8 && digit2 == 9))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
