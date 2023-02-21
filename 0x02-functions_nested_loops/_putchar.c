#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the characters c to stdout
 * @c: The characters to print
 *
 * Return: On success 1.
 * On erro , -1 is returned, and wrrno is set appropriately.
 */
int _putchar(char c)
{
   return (write(1, &c, 1));
}

