#include <stdio.h>

/**
 * main - this Prints the name of the program
 * @argc: the Number of command line arguments
 * @argv: Array name
 * Return: 0
 */
int main(int argc __attribute__((unused)), char **argv)
{
printf("%s\n", *argv);
return (0);
}
