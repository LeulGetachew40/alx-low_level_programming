#include "main.h"
#include <ctype.h>
/**
*_islower - check the code.
*Return: Always 0.
*@c: is an argument
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
