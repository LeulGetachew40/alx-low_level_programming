#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*main - Entry point
*Return: Always 0 (Success)
*Description - This program's description
*/
/* betty style doc for function main goes there */
int main(void)
{
int n, m;
srand(time(0));
n = rand() - RAND_MAX / 2;
m=n%10;
printf("Last digit of %d is %d ", n, m);
if (m < 5)
{
printf("and is greater than 5\n");
}
else if (m == 0)
{
printf("and is 0\n");
}
else if (m < 6 && m != 0)
{
printf("and is less than 6 and not 0\n");
}
return (0);
}
