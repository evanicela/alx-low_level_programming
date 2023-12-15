#include<stdio.h>

/**
* main - Entry point of the program
*
* Description: Prints all numbers of base 16 (hexadecimal) in lowercase,
* followed by a new line. Uses only the putchar function three times.
*
* Return: Always 0 (success)
*/
int main(void)
{
char hexDigit;
/* Loop to print hexadecimal digits '0' to '9' */
for (hexDigit = '0'; hexDigit <= '9'; hexDigit++)
putchar(hexDigit);
/* Loop to print hexadecimal digits 'a' to 'f' */
for (hexDigit = 'a'; hexDigit <= 'f'; hexDigit++)
putchar(hexDigit);
putchar('\n'); /* Print a new line */
return (0);
}
