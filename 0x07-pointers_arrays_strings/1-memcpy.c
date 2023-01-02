#include "main.h"
/**
*_memcpy - copies the memory area of n bytes.
*@src: the source string.
*@dest: the memory space which the string will be copied
*@n: the number of bytes
*Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}

return (dest);
}
