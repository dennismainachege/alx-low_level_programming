#include "main.h"
/**
 * _strlen - Function that returns the length of a string
 * @s: this is the input string
 * Return: Lenngth of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
