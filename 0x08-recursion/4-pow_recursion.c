#include "main.h"
/**
 *_pow_recursion - return the value of x rasied to y
 *@x: The value to be rasied.
 *@y: The value to be raised to.
 *Return: x rasied to y.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
