#include "main.h"
/**
*_puts_recursion - returns a string using recursion.
*@s: the string pointer passed to the function
*Return: void
*/

void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
_puts_recursion(s + 1);
}

else
{
_putchar('\n');
}
}
