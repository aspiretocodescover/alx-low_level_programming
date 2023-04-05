#include "main.h"

/**
 * _helper - The helper that print prime number
 * @a: character
 * @b: character
 * Return: n
 */

int _helper(int a, int b)
{
if (b == 1)
{
return (1);
}
if (a % b == 0 && b > 0)
{
return (0);
}
return (_helper(a, b - 1));
}

/**
 * is_prime_number - integer that print prime number
 * @n: character
 * Return: n
 */

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (_helper(n, n - 1));
}
