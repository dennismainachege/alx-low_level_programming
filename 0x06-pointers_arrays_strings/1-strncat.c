#include "main.h"

/**
 * _strncat - concatenates two strings using a most
 *
 * an inputted number of bytes from src.
 *
 * @dest: The to be appended upon.
 *
 * @src: The string to be appended to dest.
 *
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)

{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dast[dest_len++] = src[index];
	return (dest);
}
