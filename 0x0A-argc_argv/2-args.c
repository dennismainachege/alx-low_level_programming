#include <stdio.h>
#include <stdlib.h>
/**
 * main -This print all arguments of the program separated by new line.
 * @argc: the argument count or size of arguments.
 * @argv: the argument vector
 * Return: always 0.
 */
int main(int argc, char **argv)
{
int number = 0;

while (number < argc)
{
printf("%s\n", *(argv + number));
number++;
(*argv)++;
}
return (0);
}
