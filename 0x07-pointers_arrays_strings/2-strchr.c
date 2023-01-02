#include "main.h"
/**
*_strchr - returns a string after the occurence.
*@s: the string to be checked for ocurence
*@c: the character to be checked for occurence
*Return: the pointer to the result
*/

char *_strchr(char *s, char c)
{

while (*s != '\0')
{
if (*s == c)
{
return (s);
}

++s;
}

if (*s == c)
{
return (s);
}

return (0);
}
