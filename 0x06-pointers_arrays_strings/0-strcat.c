#include "main.h"

/**
 * _strcat - concentates the strig pionted by a null byteon the end of the string
 * @dest: A pointer to the string to be concatenated
 * @src: The source string to be appended to @dest
 *
 * Return: A pointer to the destination string @dest
 */
 
char *_strcat(char *dest,  char *src)
{
	int dlen = 0, i;
	
	
	while (dest[dlen])
	{
		dlen++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
