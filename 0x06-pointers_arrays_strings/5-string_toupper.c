#include "main.h"


/**
 * string_toupper - changes all lower case letters
 * of a srting to uppercase.
 * @str: The string to be changed.
 * Return: a pointer to change string.
 *
 */

char *string_toupper(char *str)

{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}

