#include <stdio.h>

/**
 * _puts - prints a string
 * @str: The string to print
 * return: void
 */
void _puts(char *str)
{
	for (; *str != '\0' ; str++)
	{
	_putchar(*str);
	}
_putchar('\n');
}
