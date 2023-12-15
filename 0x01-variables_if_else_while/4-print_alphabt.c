#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet in lowercase,
 * excluding the letters 'q' and 'e', followed by a new line.
 * Only the putchar function is used, and it is used twice.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    char letter;
    for (letter = 'a'; letter <= 'z'; letter++)
    {
        if (letter != 'e' && letter != 'q')
            putchar(letter);
    }
    putchar('\n'); /* Print a new line */
    return (0);
}
