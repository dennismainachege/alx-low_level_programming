#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: string containing the name to print
 * @f: function pointer to use to print the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
