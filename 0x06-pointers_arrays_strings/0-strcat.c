#include "main.h"

/**
*_strcat - concatenates the string pointed by @src.
*@dest: a pointer to the string to be concatenated upon.
*@src: the source string to be appended.
*Return: A pointer to the destination string.
*/
char *_strcat(char *dest, char *src)
{
int index = 0, dest_len = 0;

while (dest[index++])
{
dest_len++;
}

for (index = 0; src[index]; index++)
{
dest[dest_len++] = src[index];
}

return (dest);
}
