#include "main.h"

/**
*_strpbrk - matches any character specified.
*@s: The string to be matched
*@accept: the character to be matched
*Return: stirng s that matches any character specifid in accept
*/

char *_strpbrk(char *s, char *accept)
{
int i;

while (*s != '\0')
{
i = 0;
while (accept[i] != '\0')
{
if (*s == accept[i])
{
return (s);
}

i++;
}

s++;
}

return (0);
}
