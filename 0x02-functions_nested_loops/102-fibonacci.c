#include <stdio.h>

/**
* main - Entry point of the program
* Description: This program prints the first 50 Fibonacci numbers separated
* by comma and space, starting with 1 and 2, followed by a new line.
* Return: Always 0 (Success)
*/

int main(void)
{
int count = 50;
long first = 1, second = 2, next;
printf("%ld,%ld", first, second);
for (int i = 3; i <= count; i++)
{
next = first + second;
printf(",%ld", next);
first = second;
second = next;
}
printf("\n");
return (0);
}
