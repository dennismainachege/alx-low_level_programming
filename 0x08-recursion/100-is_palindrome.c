#include "main.h"
int check_pal(char *s, int i, int len);
int _strlen_recursioin(char *s);

/**
 * is_palindrome - checks if a string i a palindrome
 * @s:string to reverse
 * return:1 if it is 0 if it is not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate length of
 * return:length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
return(1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checkd the char recursiveley for palindrom
 * @s: string to check
 * @i: iterator
 * @len: Length of the string
 * return: 1if palindrome,0 if not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	{
		return (0);
	}
	if (i >= len)
	{
		return(1);
	}
return (check_pal(s, i + 1, len - 1));
}
