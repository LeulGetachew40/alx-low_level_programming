#include "main.h"
/**
*_isdigit - checks whether the input is a number or not.
*@c: the parameter to be checked.
*Return: Always 0.
*/
int _isdigit(int c)
{
if (c >= 0 && c <= 9)
{
return (1);
}
else
{
return (0);
}
}
