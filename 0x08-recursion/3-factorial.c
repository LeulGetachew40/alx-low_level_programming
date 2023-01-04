#include "main.h"
/**
 *factorial - returns factorial of n.
 *@n: the integer passed to the function.
 *Return: the factorial of n in different cases
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
