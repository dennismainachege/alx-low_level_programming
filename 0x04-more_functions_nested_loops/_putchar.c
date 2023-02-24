#include <unistd.h>

/**
 * _putchar - writes the character c to the stdout
 * 
 * Return 0 for success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
