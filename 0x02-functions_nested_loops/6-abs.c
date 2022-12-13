#include "main.h"
/**
*_abs - returns the absolute value of the number passed.
*@n: the parameter passed
*Return: Always 0.
**/
int _abs(int n)
{
if (n < 0)
{
return (n *= -1);
}
else if (n == 0)
{
return (0);
}
else
{
return (n);
}
}
