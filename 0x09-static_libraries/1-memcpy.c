#include "main.h"
/**
 * _memcpy - copies the  memory area,
 * @dest: this ois the destination memory area.
 * @src: the source memory area.
 * @n: number bytes filled.
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
*(dest + i) =  *(src + i);
return (dest);
}
