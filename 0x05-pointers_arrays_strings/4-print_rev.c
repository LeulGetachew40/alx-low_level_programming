#include "main.h"
/**
*print_rev - print the reverse order of a string.
*@s: the variable.
*Return: Always 0.
*/
void print_rev(char *s)
{
int len = 0, i;
while (s[i++])
{
len++;
}
for (i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
