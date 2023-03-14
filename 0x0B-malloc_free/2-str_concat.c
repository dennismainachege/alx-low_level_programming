#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 *   @s2: second string.
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;
	char *result;
	int i;
	/*check if s1 and s2 are empty and if empty, give them empty strings*/
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	/*find the length of the strings s1 and s2*/
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	/*allocate memory for the concatenated strings*/
	result = (char *)malloc(sizeof(char) * (1 + len1 + len2));
	if (result == NULL)
	{
		return (NULL);
	}
	/*copy the contents of s1 into the result string*/
	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	/*copy the contents of s2 into the result string*/
	for (i = 0; i <= len2; i++)
	{
		result[len1 + i] = s2[i];
	}
	return (result);
}
