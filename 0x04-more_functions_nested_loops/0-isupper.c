#include "main.h"
/**
*_isupper - checks for upper case character.
*@c: the parameter passed.
*Return: 1 if upper, 0 if lower or digit.
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
