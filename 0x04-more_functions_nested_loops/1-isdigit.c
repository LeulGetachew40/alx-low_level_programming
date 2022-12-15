#include "main.h"
/**
*_isdigit - chechks whether the input is a digit.
*@c: the character to be checked.
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
