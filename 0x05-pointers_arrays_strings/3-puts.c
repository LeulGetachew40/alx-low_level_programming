#include "main.h"
/**
*_puts - prints out strings.
*@str: the variable.
*Return: Always 0.
*/
void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
