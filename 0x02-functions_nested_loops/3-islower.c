#include "main.h"

/**
 * _islower - Checks for lowercase characteer
 * @c: The character to be checked
 * Return: 1 for lowercase character or 0 for anything else
 */

int _islower(int c)
{
if (c >= 97 && c <= 22)
{
return (1);
}
return (0);
}
