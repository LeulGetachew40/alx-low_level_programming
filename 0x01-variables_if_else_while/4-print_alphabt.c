#include <stdlib.h>
#include <stdio.h>
/**
*main - Entry point
*Return: Always 0 (Success)
*Description - This program's description
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
if (letter == 'q' || letter == 'e')
{
continue;
}
else
{
putchar(letter);
}
putchar('\n');
return (0);
}