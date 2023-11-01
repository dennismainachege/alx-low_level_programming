#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - it returns a pointer to a newly allocated space in memory.
 * @str: the string.
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
char *strout;
unsigned int i, j;

if (str == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
;
strout = (char *)malloc(sizeof(char) * (i + 1));
if (strout == NULL)
return (NULL);
for (j = 0; j <= i; j++)
strout[j] = str[j];
return (strout);
}
