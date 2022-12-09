#include <stdlib.h>
#include <stdio.h>
/**
*main - Entry point
*Return: Always 0 (Success)
*Description - This program's description
*/
int main(void)
{
int i;
char letter;
for (i = 0; i < 10; i++)
	putchar(i + '0');
for (letter = 'a'; letter <= 'f'; letter++)
	putchar(letter);
putchar('\n');
return (0);
}
