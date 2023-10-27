#include "main.h"
/**
 * _puts -it  prints string followed by newline
 * @str: the pointer to string
 * Return: void.
 */
void _puts(char *str)
{
int i;

i = 0;
while (*str != '\0')
{
_putchar(*str);
i++;
str++;
}
_putchar('\n');
}
