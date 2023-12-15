#include<stdio.h>
/**
* main - Entry point of the program
*
* Description: Prints the alphabet in lowercase followed by a new line.
* Only the putchar function is used, and it is used twice.
*
* Return: Always 0 (success)
*/
int main(void)
{
char letter;
/* Loop to iterate through the lowercase alphabet */
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
putchar('\n'); /* Print a new line */
return (0);
}
