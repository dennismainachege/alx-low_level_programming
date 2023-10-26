#include "main.h"

/**
 * _print_rev_recursion - Print string in reverse
 * @s: The string in reverse
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		returm;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s)
}
