#include "main.h"
/**
 * _puts_recursion - prints strings followed by a new line
 * @s: the string to point
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
