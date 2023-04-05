#include "main.h"

/**
 * _puts_recursion - Print a string followed by a new line
 * @b: character
 */

void _puts_recursion(char *b)
{
if (*b != '\0')
{
_putchar(*b);
_puts_recursion(b + 1);
}
else
_putchar('\n');
}
