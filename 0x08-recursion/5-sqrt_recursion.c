#include "main.h"

/**
 * _helper - The helper of natural square root
 * @n: character
 * @a: character
 * Return: n
 */

int _helper(int n, int a)
{
if (a * a > n)
{
return (-1);
}
if (a * a == n)
{
return (a);
}
else
return (_helper(n, a + 1));
}

/**
 * _sqrt_recursion - the natural square root of a number
 * @n: character
 * Return: n
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else
return (_helper(n, 0));
}
