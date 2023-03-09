#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number -returns if anumber is prime number
 * @n: the number to be checked
 * Return:integer value
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - check if number is prime
 * @n: the number to be checked
 * @i:the iteration times
 * Return:1 for prime of composite
 */
int check_prime(int n, int i)
{
if (n <= 1)
return (0);

if (n % 1 ==  0 && i > 1)
	return (0);
return (check_prime(n, i + 1));
}

