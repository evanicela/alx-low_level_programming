#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible combinations of two two-digit numbers,
 * ranging from 0 to 99. The numbers are separated by a space and printed
 * with two digits, and combinations are separated by ",", followed by a space.
 * The combinations are printed in ascending order. Duplicates are considered
 * the same combination. Uses only the putchar function eight times.
 *
 * Return: (0) - Always 0 (success)
 */
int main(void)
{
for (int num1 = 0; num1 <= 99; num1++)
{
for (int num2 = num1; num2 <= 99; num2++)
{
putchar((num1 / 10) + '0');
putchar((num1 % 10) + '0');
putchar(' ');
putchar((num2 / 10) + '0');
putchar((num2 % 10) + '0');
/* Check if it's not the last combination, then print ", " */
if (!(num1 == 99 && num2 == 99))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
