#include "main.h"
/**
*print_sign - prints the sign of the number.
*@n: the parameter passed
*Return: Always 0 (Success)
*/
int print_sign(int n)
{
if (n < 0)
{
_putchar('-');
return (1);
}
else if (n == 0)
{
return (0);
}
else
{
_putchar('+');
return 1;
}
}
