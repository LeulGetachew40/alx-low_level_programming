#include "main.h"
/*
*_isalpha - determines whether the input is an alphabet or not
*@c: a paramter
*Return: Always 0 (Success)
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
