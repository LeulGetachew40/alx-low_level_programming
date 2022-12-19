#include "main.h"
/**
*_strlen - returns the length of a string.
*@str: the variable.
*Return: Always 0.
*/
size_t _strlen(const char *str)
{
size_t length = 0;
while (*str++)
{
length++;
}
return (length);
}
