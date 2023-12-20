#include <stdio.h>

/**
* main - Entry point of the program
* Description: This program prints the first 50 Fibonacci numbers separated
* by comma and space, starting with 1 and 2, followed by a new line.
* Return: Always 0 (Success)
*/

int main(void)
{
unsigned long int first = 1;
unsigned long int second = 2;
unsigned long int next;
int i;
printf("%lu", first);
for (i = 1; i < 50 ; i++)
{
printf("%lu", second);
next = first + second;
first = second;
second = next;
if (i != 49)
{
	printf(",");
}
printf("\n");
return (0);
}
