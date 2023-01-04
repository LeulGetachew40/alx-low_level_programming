#include "main.h"
/**
*_strlen_recursion - returns the length of the string using recursion.
*@s: the pointer to the string passed to the function.
*Return: the length of the string.
*/

int _strlen_recursion(char *s)
{
if (!*s)
{
return (0);
}
return (1 + _strlen_recursion(++s));
}
