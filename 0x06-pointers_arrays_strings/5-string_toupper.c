#include "main.h"

/**
 * string_toupper - changes the lower case characters to upper case characters.
 * @str: the string to be changed.
 * Return: a pointer pointing to the changed string.
 */
char *string_toupper(char *str)
{
int index = 0;

while (str[index])
{
if (str[index] >= 'a' && str[index] <= 'z')
{
str[index] -= 32;
}

index++;
}
return (str);
}
