#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @x: character
 * Return: n
 */

int factorial(int x)
{
if (x < 0)
{
return (-1);
}
if (x == 0)
{
return (1);
}
return (x * factorial(x - 1));
}
