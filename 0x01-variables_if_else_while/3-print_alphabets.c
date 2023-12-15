#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet in lowercase,
 * then in uppercase, followed by a new line.
 * Only the putchar function is used, and it is used three times.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;
	/* Loop to print lowercase alphabet */
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	/* Loop to print uppercase alphabet */
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar('\n'); /* Print a new line */
	return (0);
}
