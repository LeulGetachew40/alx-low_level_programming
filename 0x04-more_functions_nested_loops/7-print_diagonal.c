#include "main.h"
/**
*print_diagonal - print lines.
*@n: the variable passed.
*Return: Always 0.
*/
void print_diagonal(int n)
{
int i,j;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < j; j++)
{
_putchar(' ');
}
_putchar('\\');
if (i == n - 1)
{
continue;
}
_putchar('\n');
}
}
_putchar('\n');
}
