#include "main.h"

/**
*_strncat - concatenates to strings using at most
*	    an inputted number of bytes from src
*@dest: The string to be concatenated upon.
*@src: The string to be appended to dest.
*@n: The number of bytes from src to be appened to dest.
*Return: A pointer to the resulting string dest.
*/
char*_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;

while (dest[index++])
{
dest_len++;
}

for (index = 0; src[index] && index < n; index++)
{
dest[dest_len++] = src[index];
}

return (dest);
}
