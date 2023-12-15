#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the lowercase alphabet in reverse,
 * followed by a new line. Uses only the putchar function twice.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char letter;
/* Loop to iterate through the lowercase alphabet in reverse */
for (letter = 'z'; letter >= 'a'; letter--)
putchar(letter);
putchar('\n'); /* Print a new line */
return (0);
}
