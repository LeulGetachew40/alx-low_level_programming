#include <stdio.h>
#include "main.h"

/**
 * main - Print the name of the program.
 * @argc: Count the arguments.
 * @argv: Arguments.
 * Return: Always 0 (Sucess).
 */

int main(int argc, char *argv[])
{

/*Declaring variables*/
int count = 0;

if (argc > 0)
{
/*WHILE - print arguments*/
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
}
return (0);
}
